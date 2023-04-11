#include <stdio.h>

int main() {
	// Variable declarations
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	// Variable assignments
	myInt = 5;		//2 or 4 bytes, to store whole numbers, without decimal point
	myFloat = 12.45;	//4 bytes, to store numbers with 6-7 decimal digits
	myDouble = 12.45;	//8 bytes, to store numbers with 15 decimal digits
	myChar = 'D';		//1 bytes, to store just a single character as any type surrounded in single quotations

	// Print variables
	printf("%i\n", myInt);
	printf("%f\n", myFloat);
	printf("%lf\n", myDouble);
	printf("%c\n", myChar);

	return 0;
}
