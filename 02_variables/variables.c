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

	// Multiple variable declaration
    int x, y, z;

    // Variable definitions
    int a = 7;
    int b = 8, c = 9;

    // Variable assignments
	myInt = 5;
	myFloat = 12.45;
	myDouble = 12.45;
	myChar = 'C';
    
    x = y = z = 1;

    a = 12;

	// Print variables
	/* printf is an unsafe data type function, so it is necessary to using
	   format specifier as %x specific for each data type.
	*/
	printf("myInt: %i\n", myInt);
    printf("myInt: %d\n", myInt);
    printf("myFloat: %f\n", myFloat);
	printf("myFloat: %.1f\n", myFloat);
    printf("myFloat: %.9f\n", myFloat);
    printf("myFloat: %.6f\n", myFloat);
    printf("myFloat: %.7f\n", myFloat);
    printf("myDouble: %lf\n", myDouble);
    printf("myDouble: %.9lf\n", myDouble);
    printf("myDouble: %.15lf\n", myDouble);
	printf("myChar: %c\n", myChar);

	return 0;
}
