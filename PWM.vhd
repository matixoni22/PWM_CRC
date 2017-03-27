
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity PWM is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           data_out : in  STD_LOGIC_vector(7 downto 0);
           data_in : out  STD_LOGIC_vector(7 downto 0);
           PWM_out : out  STD_LOGIC;
           address : in  STD_LOGIC_vector(1 downto 0);
           nr_w : in  STD_LOGIC;
			  deformation : in std_logic); -- sygna³ deformuj¹cy 
end PWM;

architecture a_PWM of PWM is

signal period : std_logic_vector(7 downto 0) := (others=>'0');
signal filling : std_logic_vector(7 downto 0) := (others=>'0');
signal start: std_logic:='0';
signal count_out: std_logic_vector(7 downto 0):=(others=>'0');
signal check:std_logic:='0';

begin
	--process ustawiania parametrów przebiegu
	data_set:process(clk, reset)
	begin
		--warunki po resecia albo nieprzewidzianym problemie
		if(reset='1' or nr_w='0') then
			period<="00000000";
			filling<="00000000";
			start<='0';
		elsif(clk'event and clk='1') then
		-- programiwanie adresów
			if(address="01")then 	-- OKRES					-- 																	
				period<=data_out+deformation;					-- plus deformacja sygn³y przez dodanie '1' 				
			elsif(address="10") then-- WYPE£NIENIE
				filling<=data_out+deformation;				-- deformacja przez dodanie jedynki
			elsif(address="11")then	-- START
				start<='1';
			end if;
		end if;
	end process data_set;
	
	--ustawienie licznika 
	counter: process(clk,reset,start)--licznik odpowiada na start bo potrzebuje sygna³u zapalaj¹cego
	begin	
		if(start='0' or reset='1')then
			count_out<="00000000";
		elsif(start='1' and clk'event and clk='1') then --NAPRAWIÆ
			if(count_out=period)  then --brak sygna³u do 00000000 gdy¿ pogram zaczyna liczyæ dla 00000001 póŸniej  00000010 a porównania nie bierze pod uwage
				count_out<="00000000";
			else
				count_out<=count_out+"01";
			end if;
		end if;				
	end process counter;
	
	--Komparator
	comparator: process(count_out)
	begin
		if(start='1') then
			if(count_out<filling)then
				PWM_out<='1';
			else
				PWM_out<='0';
			end if;
		elsif(start='0') then
			PWM_out<='0';
		end if;
	end process comparator;
	
	--Multiplekser data out
	mux:process(address,clk)						--problemem jest to ¿e zapis jest o jeden cykl dalej ni¿ odczyt i wystêpuj¹ 0000000 stany które trwaj¹
	begin													--przez jeden cykl
	if(clk'event and clk='1') then
		if(address="01") then--OKRES
			data_in<=period;
		elsif(address="10") then--WYPE£NIENIE
			data_in<=filling;
		elsif(address="11") then--START
			data_in<="0000000"&start;
		else
			data_in<="00000000";
		end if;
	end if;
	end process mux;

end a_PWM;

