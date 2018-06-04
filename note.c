/* Multiline
Comment */

//Single Comment

#include <stdio.h>
#include <string.h>

#define MYNAME

int main(int argc, char const *argv[])
{
	char firstLetter = 'M';

	int age = 19;

	long int superBigNum = -32767000;

	float piValue = 3.14159265359;

	double reallyBigPi = 3.141592653591415926535914159265359;

	printf("\n");

	printf("This will print to screen\n\n");

	printf("I am %d years old\n\n", age ); 	// %d print int

	printf("Big Number %ld\n\n", superBigNum);

	printf("Pi = %.5f\n\n", piValue);

	printf("Big Pi = %.15f\n\n", reallyBigPi);

	printf("The first letter in my name is %c\n\n", firstLetter);

	return 0;
}
