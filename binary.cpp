#include "binary.h"
Binary::Binary(){
	set_number(0);
}

Binary::Binary(int new_number){
	set_number(new_number);
}

void Binary::set_number(int new_number){
	Roman::set_number(new_number);
	int_to_binary();
}

string Binary::get_binary_style()const{
	return binary_number;
}

void Binary::int_to_binary(){
	/*
	Assign 0 if number is o, otherwise, convert number to a binary format string by dividing by 2 and storing the remainder untill there are no further remainders.
	*/
	int remainder = Number::get_number();
	binary_number="";
	ostringstream string_stream;
	if(remainder==0){
		binary_number="0";
	}
	while (remainder>0) 
	{
		string_stream.str("");
		string_stream.clear();
		string_stream<<remainder%2;
		binary_number.insert(0,string_stream.str());
		remainder/=2;
	}
}