#include "number.h"
Number::Number(){
	set_number(0);
}
Number::Number(int new_number){
	set_number(new_number);
}
string Number::get_US_style()const{
	return US;
}
string Number::get_EURO_style()const{
	return EURO;
}
int Number::get_number()const{
	return number;
}
void Number::set_number(int new_number){
	if (new_number<4000){	//ensure number <4000
		number=new_number;
	}
	else{number=0;}
	int_to_US();
	int_to_EURO();
}
void Number::int_to_US(){
	ostringstream string_stream;
	string_stream<<number;
	US=string_stream.str();
	if(US.size()>3){	//number can't be greater than 4000, no need to check for Millions' ","
		US.insert(1,",");
	}
}
void Number::int_to_EURO(){
	ostringstream string_stream;
	string_stream<<number;
	EURO=string_stream.str();
	if(EURO.size()>3){	//number can't be greater than 4000, no need to check for Millions' "."
		EURO.insert(1,".");
	}	
}