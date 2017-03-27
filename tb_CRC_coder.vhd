--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:06:09 12/20/2016
-- Design Name:   
-- Module Name:   G:/Projekty/VSLI/lab2/PWM_CRC/tb_CRC_coder.vhd
-- Project Name:  PWM_CRC
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CRC_coder
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
use ieee.std_logic_unsigned.all; 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_CRC_coder IS
END tb_CRC_coder;
 
ARCHITECTURE behavior OF tb_CRC_coder IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CRC_coder
    PORT(
         data_in_crc_coder : IN  std_logic_vector(7 downto 0);
         data_out_crc_coder : OUT  std_logic_vector(7 downto 0);
         CRC_out : OUT  std_logic_vector(15 downto 0);
        clk: in std_logic);
    END COMPONENT;
    

   --Inputs
   signal data_in_crc_coder : std_logic_vector(7 downto 0) := (others => '0');
	signal clk: std_logic:='0';
	
 	--Outputs
   signal data_out_crc_coder : std_logic_vector(7 downto 0);
   signal CRC_out : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN


	-- Instantiate the Unit Under Test (UUT)
   uut: CRC_coder PORT MAP (
          data_in_crc_coder => data_in_crc_coder,
          data_out_crc_coder => data_out_crc_coder,
          CRC_out => CRC_out,
			 clk=>clk
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
		wait for clk_period;
		data_in_crc_coder<="11010100";
		wait for 1*clk_period;
		data_in_crc_coder<="01110100";
		wait for 1*clk_period;

	
		assert false severity failure;
   end process;

END;
