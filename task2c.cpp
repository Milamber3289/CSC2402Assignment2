#include<iostream>
#include<cassert>
#include<vector>
#include "Binary.h"
using namespace std;

string formatted_object_style(Binary binary_object,int choice)
{
/*
Takes Binary object and choice (integer from 1-4 representing the desired format) as arguments, and returns a string of the object in the desired format. 
1-Roman Numerals
2-Binary
3-US Style
4-Euro style
if choice is not one of the obtions above, the integer value will be returned
*/
	string formatted_object;
	switch(choice)
	{
		 case 1: formatted_object = binary_object.get_roman_style(); break;
		 case 2: formatted_object = binary_object.get_binary_style(); break;
		 case 3: formatted_object = binary_object.get_US_style(); break;
		 case 4: formatted_object = binary_object.get_EURO_style(); break;		 
		 default: formatted_object = binary_object.get_number(); break;
	}
	return formatted_object;
}

int main(){
	//set up vectors for history
	vector<Binary>object_history(0);
	vector<int>choice_history(0);
	
	int choice;	
	int user_value;
	string formatted_number;
	//continue untill quit
	while(!cin.fail())
	{
		//initial prompt to capture users option selection
		cout<<"Enter 1 if you want to change from decimal to Roman numeral \n"<<"Enter 2 if you want to change from decimal to Binary numeral \n";
		cout<<"Enter 3 if you want to display decimal in US style \n"<<"Enter 4 if you want to display decimal in Euro style \nEnter a non-digit to quit\n";
		cin>>choice;
		
		if(!cin.fail())
		{
			//validate selection
			assert(choice>=1 && choice<=4);

			//second prompt to capture users number
			cout<<"Enter a positive integer smaller than 4000\n";
			cin>>user_value;

			//validate selection	
			assert(user_value<4000);

			//assign user value to source_number and record history in history vector
			object_history.push_back(Binary(user_value));
			choice_history.push_back(choice);
			
			//print number in selected style
			cout<<formatted_object_style(object_history.at(object_history.size()-1),choice_history.at(choice_history.size()-1))<<"\n";
		}
	}
	//display history and quit
	cin.clear();
	cout<<"non-digit entered, application will quit\nHistory:\n";
	for(unsigned i=0;i<object_history.size();i++)
	{
		cout<<"User's Integer: "<<object_history.at(i).get_number()<<"\n";
		cout<<"Selected Option: "<<choice_history.at(i)<<"\n";
		cout<<"Converted Value: "<<formatted_object_style(object_history.at(i),choice_history.at(i))<<"\n\n";
	}
	
	return 0;
}