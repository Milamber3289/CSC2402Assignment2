#ifndef Number_H
#define Number_H
#include<string>
#include<sstream>

using namespace std;

class Number {
    public:
        // Default constructor without any initial value.
		// Initial value will be set to 0.
        // Value of integer is 0.     
        // Value of US is “0”.
        // Value of EURO is “0”.
        Number();
        
        // Constructor with initial value.
        Number(int);
        
        // Returns int as a string in US style.
        string get_US_style()const;
        
        // Returns int as a string in Euro style.
        string get_EURO_style()const;
        
        // Returns the int.  
        int get_number()const;
        
        // Sets the value of int, US, and EURO.
        void set_number(int); 
        
    private:
        // A decimal number less than 4000.
        int number; 
        
        // A string represent number in US style.
        string US;

        // A string representing number in EURO style.
        string EURO;

        // converting int to string in US style
        void int_to_US();

        // converting int to string in EURO style
        void int_to_EURO();
};  
#endif
