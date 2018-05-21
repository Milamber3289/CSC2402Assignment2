#ifndef Binary_H
#define Binary_H
#include "roman.h"

class Binary : public Roman{
	public:
	// Default constructor without any initial value.
	// Initial value will be set to 0.
	// Value of integer is 0.     
	// Value of US is “0”.
	// Value of EURO is “0”.
	// Value of roman_numeral is “INVALID”.
	// Value of binary_number is "0”.
	Binary();
	
	// Constructor with initial value.
	Binary(int);
	
	//overload setnumber() to call int_to_binary()
	void set_number(int);	
	
	// Returns int as a string in binary style.
	string get_binary_style()const;
	
	private:
	//A string to represent number in binary style
	string binary_number;
	
	// converting int to string in binary style
	void int_to_binary();
};

#endif