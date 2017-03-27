----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:43:36 12/21/2016 
-- Design Name: 
-- Module Name:    CRC_PWM - a_CRC_PWM 
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

entity CRC_PWM is
    Port (deformation_global : in  STD_LOGIC;
         data_in_global : in  STD_LOGIC_vector(7 downto 0);
         data_out_global : out  STD_LOGIC_vector(7 downto 0);
         PWM_out_global : out  STD_LOGIC;
			clk_global: in std_logic;
			reset_global: in std_logic;
			nr_w_global	: in std_logic;
			address_global : in std_logic_vector(1 downto 0)
			  );
end CRC_PWM;

architecture a_CRC_PWM of CRC_PWM is

component CRC_coder is --zdefiniowany koder
	port(
		data_in_crc_coder : in  STD_LOGIC_vector(7 downto 0);
      data_out_crc_coder : out  STD_LOGIC_vector(7 downto 0);
      CRC_out : out  STD_LOGIC_vector(15 downto 0);
		clk: in std_logic
	);
end component;

component CRC_decoder is -- zdefiniowany decoder
	port(
		data_in_crc_decoder : in  STD_LOGIC_vector(7 downto 0);
		CRC_in : in  STD_LOGIC_vector(15 downto 0);
      data_out_crc_decoder : out  STD_LOGIC_vector(7 downto 0);
		clk: in std_logic
		);
end component;

component PWM is 
	port(
		clk : in  STD_LOGIC;
      reset : in  STD_LOGIC;
      data_out : in  STD_LOGIC_vector(7 downto 0);
      data_in : out  STD_LOGIC_vector(7 downto 0);
      PWM_out : out  STD_LOGIC;
      address : in  STD_LOGIC_vector(1 downto 0);
      nr_w : in  STD_LOGIC;
		deformation : in std_logic
	);
end component;

signal CRC_code :std_logic_vector(15 downto 0) :=(others=>'0');
signal CRC_to_PWM :std_logic_vector(7 downto 0) :=(others=>'0');
signal PWM_to_CRC :std_logic_vector(7 downto 0) :=(others=>'0');

begin
	coder_block: CRC_coder port map( data_in_crc_coder=> data_in_global,
												CRC_out=>CRC_code,
												data_out_crc_coder=> CRC_to_PWM,
												clk=>clk_global --- MOZNA USUN¥Æ Z KODERA 
												);
												
	PWM_block: PWM port map(PWM_out=>PWM_out_global,
									data_out=>CRC_to_PWM,
									deformation=>deformation_global,
									clk=> clk_global,
									reset=>reset_global,
									address=> address_global,
									nr_w=>nr_w_global,
									data_in=>PWM_to_CRC
									);
									
	decoder_block: CRC_decoder port map(CRC_in=> CRC_code, 
													data_in_crc_decoder=>PWM_to_CRC,
													data_out_crc_decoder=> data_out_global,
													clk=>clk_global --MOZNA USUN¥C Z DEKODERA
													);

end a_CRC_PWM;

