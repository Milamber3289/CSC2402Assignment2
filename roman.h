#ifndef Roman_H
#define Roman_H
#include "number.h"
#include<string>

class Roman : public Number{
	public:
	// Default constructor without any initial value.
	// Initial value will be set to 0.
	// Value of integer is 0.     
	// Value of US is “0”.
	// Value of EURO is “0”.
	// Value of roman_numeral is “INVALID”.
	Roman();
	
	// Constructor with initial value.
	Roman(int);
	
	
	//overload setnumber() to call int_to_Roman()
	void set_number(int);	
	
	// Returns int as a string in Roman numeral style.
	string get_roman_style()const;
	
	private:
	//A string to represent number in Roman numeral style
	string roman_numeral;
	
	// converting int to string in Roman numeral style
	void int_to_roman();
};

#endif