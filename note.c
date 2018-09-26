/* Multiline
Comment */

//Single Comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Michael Chang"

int main(int argc, char const *argv[])
{
	char firstLetter = 'M';      
	
	int age = 19;

	long int superBigNum = -327670000;

	float piValue = 3.14159;

	double reallyBigPi = 3.141591415914159;

	printf("\n"); 	// \n - newline; \t - new tab

	printf("This will print to screen\n\n");

	printf("I am %d years old\n\n", age); 	// %d for int

	printf("Big number %ld\n\n", superBigNum); 	// %ld for long int

	printf("Pi = %.5f\n\n", piValue); 	// %.#f for float

	printf("Big Pi = %.15f\n\n", reallyBigPi); 	// same as double

	printf("The first letter of my name is %c\n\n", firstLetter); 	// %c for char

	printf("My name is %s\n\n", "Michael"); 	// %s for string

	// To Create a string
	char myName[] = "Michael Chang";

	//To change the value
	strcpy(myName, "Bob Smith");

	printf("My name is %s\n\n", myName);


	//char middleInitial;

	printf("What is your middle initial? ");

	scanf(" %c", &middleInitial);

	//printf("Middle initial %c\n", middleInitial);
	
	// Make a string array
	char firstName[30], lastName[30];

	printf("What is your name? ");

	scanf(" %s %s", firstName,lastName);

	printf("Your Name is %s %c %s\n\n", firstName, middleInitial, lastName);

	int month, day, year;

	printf("What's your birth date? ");

	scanf(" %d/%d/%d'n'n", &month, &day, &year);

	printf("\nBirth Date %d/%d/%d\n\n", month, day, year);


	// Math
	// +, -, *, /, %(int only)

	int num1 = 12, num2 = 15, numAns;
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

	printf("Integer calculation %d\n\n", num2 / num1);

	printf("Float calculation %f\n\n", decimal2 / decimal1);

	printf("Modulus %d\n\n", num2 % num1);

	printf("Without Parentheses %d\n\n", 3 + 6 * 10);

	printf("With Parentheses %d\n\n", (3 + 6) * 10);


	int randomNum = 1;

	printf("1 += 2 : %d\n\n", randomNum += 2);

	// Don't do this
	printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);

	// -= *= /= %=, varName++, varName--
	int exNum = 1;

	printf("++%d : %d\n\n", exNum, ++exNum);

	exNum = 1;

	printf("%d++ : %d\n\n", exNum, exNum++);


	// To cast a value
	int numberEx = 12;
	
	int numberEx2 = 14;

	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx / numberEx2);

	
	return 0;
}
