//------------------------------------------------------------------------------
// Data types, Variables and Constants.
//
//------------------------------------------------------------------------------

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main() {
	// Variable declarations
    // <data_type> identifier
    /* 
	int myInt;
	short myShort;
    long myLong;
    float myFloat;
	double myDouble;
	char myChar; 
	*/

	/* It's a best practice to align block of identifiers by Tab */ 
	int 	myInt;
    short   myShort;
    long    myLong;
	float 	myFloat;
	double 	myDouble;
	char 	myChar;

	// Multiple variable declaration
    int x, y, z;

    // Variable definitions
    // <data_type> identifier = value;
    int a = 7;
    int b = 8, c = 9;

    // Variable initialization
    int d;
    d = 1;

    // Variable assignments
	myInt = 5;
	myFloat = 12.45;
	myDouble = 12.45;
	myChar = 'C';
    
    x = y = z = 1;

    a = 12;

	// Print variables
	// printf is an unsafe data type function, so it is necessary to using
	// format specifier as %x specific for each data type.
	/*
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
	printf("myChar: %c\n\n", myChar);
    */

    //Complex data type variable declaration
    /*
    signed   int si;
    unsigned int usi;
    */
    
    //Constants
    //Using <const> while declaration a variable
    const int TRUE = 1;
    const int FALSE = 0;
    
    printf("%d\n", TRUE);
    printf("%d\n", FALSE);

    //Boolean
    bool t = true;
    bool f = false;

    printf("t is %s\n", t ? "True" : "False");

    printf("Data Type            Byte(s) Range\n");
    printf("--------------------------------------------------------------\n");
    printf("[signed] char        %d       [%d, %d]\n", CHAR_BIT / 8, 
            SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char        %d       [%d, %d]\n", CHAR_BIT / 8, 
            0, UCHAR_MAX);
    
    printf("[signed] short [int] %lu       [%d, %d]\n", sizeof(short), 
            SHRT_MIN, SHRT_MAX);
    printf("unsigned short [int] %lu       [%d, %d]\n", sizeof(unsigned short), 
            0, USHRT_MAX);
    
    printf("[signed] [int]       %lu       [%d, %d]\n", sizeof(int), 
            INT_MIN, INT_MAX);
    printf("unsigned [int]       %lu       [%d, %u]\n", sizeof(unsigned int), 
            0, UINT_MAX);
    
    printf("[signed] long [int]  %lu       [%ld, %ld]\n", sizeof(long), 
            LONG_MIN, LONG_MAX);
    printf("unsigned long [int]  %lu       [%d, %lu]\n", sizeof(unsigned long), 
            0, ULONG_MAX);

    printf("         float       %lu       [%g, %g]\n", sizeof(float), 
            -FLT_MAX, FLT_MAX);
    printf("         double      %lu       [%g, %g]\n", sizeof(double), 
            -DBL_MAX, DBL_MAX);
    printf("         long double %lu      [%Lg, %Lg]\n", sizeof(long double), 
            -LDBL_MAX, LDBL_MAX);
    
    return 0;
}
