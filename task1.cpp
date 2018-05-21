#include<iostream>
#include "number.h"
int main(){
	//Create Number one without initial value
	Number one;
	cout<<"Number one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	
	//Set value of one and test again
	one.set_number(1111);
	cout<<"Number one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	
	//Set value of one and test again
	one.set_number(99);
	cout<<"Number one:\n";
	cout<<one.get_number()<<"\n"; //display as integer
	cout<<one.get_US_style()<<"\n"; //display as US Style
	cout<<one.get_EURO_style()<<"\n"; //display as EURO style
	
	//Create Number two with initial value
	Number two(22);
	cout<<"Number two:\n";
	cout<<two.get_number()<<"\n"; //display as integer
	cout<<two.get_US_style()<<"\n"; //display as US Style
	cout<<two.get_EURO_style()<<"\n"; //display as EURO style
	
	//Set value of two and test again
	two.set_number(2022);
	cout<<"Number two:\n";
	cout<<two.get_number()<<"\n"; //display as integer
	cout<<two.get_US_style()<<"\n"; //display as US Style
	cout<<two.get_EURO_style()<<"\n"; //display as EURO style
	
	//Create Number three with initial value
	Number three(3333);
	cout<<"Number three:\n";
	cout<<three.get_number()<<"\n"; //display as integer
	cout<<three.get_US_style()<<"\n"; //display as US Style
	cout<<three.get_EURO_style()<<"\n"; //display as EURO style
	
	return 0;
}