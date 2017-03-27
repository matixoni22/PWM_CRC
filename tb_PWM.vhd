--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:40:50 12/07/2016
-- Design Name:   
-- Module Name:   G:/Projekty/VSLI/lab2/PWM_CRC/tb_PWM.vhd
-- Project Name:  PWM_CRC
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PWM
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
 
ENTITY tb_PWM IS
END tb_PWM;
 
ARCHITECTURE behavior OF tb_PWM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PWM
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         data_out : IN  std_logic_vector(7 downto 0);
         data_in : OUT  std_logic_vector(7 downto 0);
         PWM_out : OUT  std_logic;
         address : IN  std_logic_vector(1 downto 0);
         nr_w : IN  std_logic;
			deformation: in std_logic -- deformacja sygna³y
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal data_out : std_logic_vector(7 downto 0) := (others => '0');
   signal address : std_logic_vector(1 downto 0) := (others => '0');
   signal nr_w : std_logic := '0';
	signal deformation : std_logic:='0'; -- deformacja 

 	--Outputs
   signal data_in : std_logic_vector(7 downto 0);
   signal PWM_out : std_logic;
	
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PWM PORT MAP (
          clk => clk,
          reset => reset,
          data_out => data_out,
          data_in => data_in,
          PWM_out => PWM_out,
          address => address,
          nr_w => nr_w,
			 deformation=> deformation
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
   -- Stimulus process
   stim_proc: process
   begin		
      reset<='1';
		nr_w<='0';
		data_out<=(others=>'0');
		address<=(others=> '0');
		wait for 3*clk_period;
		
		reset<='0';
		wait for 2*clk_period;
		
		reset<='0';
		nr_w<='1';
		
		address<="01"; --ustawienie okresu
		data_out<="00000111";
		wait for 2*clk_period;
		
		address<="10"; --ustawienie wype³nienia
		data_out<="00000011";
		wait for 2*clk_period;
		
		address<="11"; --ustawianie statrtu
		
		wait for 300*clk_period;
		
		
		assert false severity failure;
		
   end process;

END;
