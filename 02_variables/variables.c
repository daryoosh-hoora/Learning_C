//------------------------------------------------------------------------------
// Data types in C:
//
// 	- int: 2 or 4 bytes, to store whole numbers, without decimal point
//	- float: 4 bytes, to store numbers with 6-7 decimal digits
//	- double: 8 bytes, to store numbers with 15 decimal digits
//	- char: 1 bytes, to store just a single character as any type which
//	        surrounded by single quotations
//------------------------------------------------------------------------------

#include <stdio.h>

int main() {
	// Variable declarations
	/* 
	int myInt;
	float myFloat;
	double myDouble;
	char myChar; 
	*/

	/* It's a best practice to align block of identifiers by Tab */ 
	int 	myInt;
	float 	myFloat;
	double 	myDouble;
	char 	myChar;

	// Variable assignments
	myInt = 5;
	myFloat = 12.45;
	myDouble = 12.45;
	myChar = 'C';

	// Print variables
	/* printf is an unsafe data type function, so it is necessary to using
	   format specifier as %x specific for each data type.
	*/
	printf("%i\n", myInt);
	printf("%f\n", myFloat);
	printf("%lf\n", myDouble);
	printf("%c\n", myChar);

	return 0;
}
