#include<iostream>
#include "roman.h"
int main(){
	//Create Roman one without initial value
	Roman one;
	cout<<"Roman one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	cout<<one.get_roman_style()<<"\n"; //display as Roman numeral style
	
	//Set value of one and test again
	one.set_number(2014);
	cout<<"Roman one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	cout<<one.get_roman_style()<<"\n"; //display as Roman numeral style
	
	//Create Roman two with initial value
	Roman two(22);
	cout<<"Roman two:\n";
	cout<<two.get_number()<<"\n"; //display as integer
	cout<<two.get_US_style()<<"\n"; //display as US Style
	cout<<two.get_EURO_style()<<"\n"; //display as EURO style
	cout<<two.get_roman_style()<<"\n"; //display as Roman numeral style
	
	//Create Roman three with initial value
	Roman three(2402);
	cout<<"Roman three:\n";
	cout<<three.get_number()<<"\n"; //display as integer
	cout<<three.get_US_style()<<"\n"; //display as US Style
	cout<<three.get_EURO_style()<<"\n"; //display as EURO style
	cout<<three.get_roman_style()<<"\n"; //display as Roman numeral style

	return 0;
}