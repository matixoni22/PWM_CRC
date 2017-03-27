--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:21:36 12/29/2016
-- Design Name:   
-- Module Name:   G:/Projekty/VSLI/lab2/PWM_CRC/tb_CRC_PWM.vhd
-- Project Name:  PWM_CRC
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CRC_PWM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_CRC_PWM IS
END tb_CRC_PWM;
 
ARCHITECTURE behavior OF tb_CRC_PWM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CRC_PWM
    PORT(
         deformation_global : IN  std_logic;
         data_in_global : IN  std_logic_vector(7 downto 0);
         data_out_global : OUT  std_logic_vector(7 downto 0);
         PWM_out_global : OUT  std_logic;
         clk_global : IN  std_logic;
         reset_global : IN  std_logic;
         nr_w_global : IN  std_logic;
         address_global : IN  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal deformation_global : std_logic := '0';
   signal data_in_global : std_logic_vector(7 downto 0) := (others => '0');
   signal clk_global : std_logic := '0';
   signal reset_global : std_logic := '0';
   signal nr_w_global : std_logic := '0';
   signal address_global : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal data_out_global : std_logic_vector(7 downto 0);
   signal PWM_out_global : std_logic;

   -- Clock period definitions
   constant clk_global_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CRC_PWM PORT MAP (
          deformation_global => deformation_global,
          data_in_global => data_in_global,
          data_out_global => data_out_global,
          PWM_out_global => PWM_out_global,
          clk_global => clk_global,
          reset_global => reset_global,
          nr_w_global => nr_w_global,
          address_global => address_global
        );

   -- Clock process definitions
   clk_global_process :process
   begin
		clk_global <= '0';
		wait for clk_global_period/2;
		clk_global <= '1';
		wait for clk_global_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin	
		reset_global<='1';
		nr_w_global<='0';
		data_in_global<=(others=>'0');
		address_global<=(others=> '0');
		wait for 3*clk_global_period;
		
		
		--PIERWSZA PRÓBA BEZ DEFORMACJI
		reset_global<='0';
		wait for 2*clk_global_period;
		
		reset_global<='0';
		nr_w_global<='1';
		deformation_global<='0';
		
		address_global<="01"; --ustawienie okresu
		data_in_global<="00000111";
		wait for 2*clk_global_period;
		
		address_global<="10"; --ustawienie wype³nienia
		data_in_global<="00000011";
		wait for 2*clk_global_period;
		
		address_global<="11"; --ustawianie statrt
		
		wait for 20*clk_global_period;
		
		--DRUGA PRÓBA Z DEFORMACJ¥
		reset_global<='1';
		wait for 2*clk_global_period;
		
		reset_global<='0';
		nr_w_global<='1';
		deformation_global<='1';
		
		address_global<="01"; --ustawienie okresu
		data_in_global<="00001111";
		wait for 2*clk_global_period;
		
		address_global<="10"; --ustawienie wype³nienia
		data_in_global<="00000111";
		wait for 2*clk_global_period;
		
		address_global<="11"; --ustawianie statrtu
		
		wait for 20*clk_global_period;

      assert false severity failure;
   end process;

END;
