----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:45:21 12/19/2016 
-- Design Name: 
-- Module Name:    CRC_coder - a_CRC_coder 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CRC_coder is
    Port ( data_in_crc_coder : in  STD_LOGIC_vector(7 downto 0);
           data_out_crc_coder : out  STD_LOGIC_vector(7 downto 0);
           CRC_out : out  STD_LOGIC_vector(15 downto 0);
			  clk: in std_logic);
end CRC_coder;

architecture a_CRC_coder of CRC_coder is

	function crc_16( data_i : in std_logic_vector(7 downto 0);
							CRC_i	: in std_logic_vector(15 downto 0))
	return std_logic_vector is
		variable CRC_o: std_logic_vector(15 downto 0);
	begin
		CRC_o(0):= data_i(7) xor data_i(6) xor data_i(5) xor data_i(4) xor data_i(3) xor data_i(2) xor data_i(1) xor data_i(0) xor
					  CRC_i(8) xor CRC_i(9) xor CRC_i(10) xor CRC_i(11) xor CRC_i(12) xor CRC_i(13) xor CRC_i(14) xor CRC_i(15);
		CRC_o(1):= data_i(7) xor data_i(6) xor data_i(5) xor data_i(4) xor data_i(3) xor data_i(2) xor data_i(1)xor 
					  CRC_i(9) xor CRC_i(10) xor CRC_i(11) xor CRC_i(12) xor CRC_i(13) xor CRC_i(14) xor CRC_i(15);
		CRC_o(2):= data_i(1) xor data_i(0) xor CRC_i(9) xor CRC_i(8);
		CRC_o(3):= data_i(2) xor data_i(1) xor CRC_i(10) xor CRC_i(9);
		CRC_o(4):= data_i(3) xor data_i(2) xor CRC_i(11) xor CRC_i(10);
		CRC_o(5):= data_i(4) xor data_i(3) xor CRC_i(12) xor CRC_i(11);
		CRC_o(6):= data_i(5) xor data_i(4) xor CRC_i(13) xor CRC_i(12);
		CRC_o(7):= data_i(6) xor data_i(5) xor CRC_i(14) xor CRC_i(13);
		CRC_o(8):= data_i(7) xor data_i(6) xor CRC_i(0) xor CRC_i(14) xor CRC_i(15);
		CRC_o(9):= data_i(7) xor CRC_i(1) xor CRC_i(15);
		CRC_o(10):= CRC_i(2);
		CRC_o(11):= CRC_i(3);
		CRC_o(12):= CRC_i(4);
		CRC_o(13):= CRC_i(5);
		CRC_o(14):= CRC_i(6);
		CRC_o(15):= data_i(7) xor data_i(6) xor data_i(5) xor data_i(4) xor data_i(3) xor data_i(2) xor data_i(1) xor data_i(0) xor
						CRC_i(7) xor CRC_i(8) xor CRC_i(9) xor CRC_i(10) xor CRC_i(11) xor CRC_i(12) xor CRC_i(13) xor CRC_i(14) xor CRC_i(15);
		return CRC_o;
	end crc_16;
	
	signal CRC_o :std_logic_vector(15 downto 0) := (others=>'0');
	
begin
	reg: process (data_in_crc_coder)
	begin
		CRC_o <= crc_16(data_in_crc_coder,"0000000000000000");
	end process reg;
	
	data_out_crc_coder<=data_in_crc_coder;
	CRC_out<= CRC_o;
	
end a_CRC_coder;
