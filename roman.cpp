#include "roman.h"

Roman::Roman(){
	set_number(0);
}

Roman::Roman(int new_number){
	set_number(new_number);
}

void Roman::set_number(int new_number){
	Number::set_number(new_number);
	int_to_roman();
}

string Roman::get_roman_style()const{
	return roman_numeral;
}

void Roman::int_to_roman(){
	/*
	Check if value is invalid (0) and assign "invalid" if true. If number is not invalid, then loop through each symbol from highest to lowest and assign the correct number of tally symbols.
	Reduce to_tally by tally symbol's value until the while condition is no longer met then progress to the next symbol 
	*/
	int to_tally = Number::get_number();
	if (to_tally==0){
		roman_numeral="INVALID";
	}
	else{
		roman_numeral="";
		while (to_tally>=1000) 
		{
			roman_numeral.append("M");
			to_tally=to_tally-1000;
		}
		while (to_tally>=900) 
		{
			roman_numeral.append("CM");
			to_tally=to_tally-900;
		}		
		while (to_tally>=500) 
		{
			roman_numeral.append("D");
			to_tally=to_tally-500;
		}
		while (to_tally>=400) 
		{
			roman_numeral.append("CD");
			to_tally=to_tally-400;
		}		
		while (to_tally>=100) 
		{
			roman_numeral.append("C");
			to_tally=to_tally-100;
		}
		while (to_tally>=90) 
		{
			roman_numeral.append("XC");
			to_tally=to_tally-90;
		}
		while (to_tally>=50) 
		{
			roman_numeral.append("L");
			to_tally=to_tally-50;
		}
		while (to_tally>=40) 
		{
			roman_numeral.append("XL");
			to_tally=to_tally-40;
		}
		while (to_tally>=10) 
		{
			roman_numeral.append("X");
			to_tally=to_tally-10;
		}
		while (to_tally>=9) 
		{
			roman_numeral.append("IX");
			to_tally=to_tally-9;
		}
		while (to_tally>=5) 
		{
			roman_numeral.append("V");
			to_tally=to_tally-5;
		}
		while (to_tally>=4) 
		{
			roman_numeral.append("IV");
			to_tally=to_tally-4;
		}
		while (to_tally>=1) 
		{
			roman_numeral.append("I");
			to_tally=to_tally-1;
		}
	}
}
