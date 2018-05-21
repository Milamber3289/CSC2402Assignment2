#include<iostream>
#include "binary.h"

int main(){
	//Create Binary one without initial value
	Binary one;
	cout<<"Binary one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	cout<<one.get_roman_style()<<"\n"; //display as Roman numeral style
	cout<<one.get_binary_style()<<"\n"; //display as Binary number style
	
	//Set value of one and test again
	one.set_number(1024);
	cout<<"Binary one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	cout<<one.get_roman_style()<<"\n"; //display as Roman numeral style
	cout<<one.get_binary_style()<<"\n"; //display as Binary number style
	
	//Create Roman two with initial value
	Roman two(22);
	cout<<"Roman two:\n";
	cout<<two.get_number()<<"\n"; //display as integer
	cout<<two.get_US_style()<<"\n"; //display as US Style
	cout<<two.get_EURO_style()<<"\n"; //display as EURO style
	cout<<two.get_roman_style()<<"\n"; //display as Roman numeral style
	
	//Create Number three with initial value
	Number three(2402);
	cout<<"Number three:\n";
	cout<<three.get_number()<<"\n"; //display as integer
	cout<<three.get_US_style()<<"\n"; //display as US Style
	cout<<three.get_EURO_style()<<"\n"; //display as EURO style

	//Create Binary four with initial value
	Binary one(3543);
	cout<<"Binary four:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	cout<<one.get_roman_style()<<"\n"; //display as Roman numeral style
	cout<<one.get_binary_style()<<"\n"; //display as Binary number style
	
	return 0;
}