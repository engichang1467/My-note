/* Multiline comment*/
// single comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Michael Chang"

int globalVar = 100;

int main() {
/*
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
*/

	//char middleInitial;

/*
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
*/

/*
	// Math
	// +, -, *, /, %(int only)

	int num1 = 12, num2 = 15, numAns;
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;

	printf("Integer calculation %d\n\n", num2 / num1);

	printf("Float calculation %f\n\n", decimal2 / decimal1);

	printf("Modulus %d\n\n", num2 % num1);

	printf("Without Parentheses %d\n\n", 3 + 6 * 10);

	printf("With Parentheses %d\n\n", (3 + 6) * 10);
*/
/*
	int randomNum = 1;

	printf("1 += 2 : %d\n\n", randomNum += 2);

	// Don't do this
	printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);

	// -= *= /= %=, varName++, varName--
	int exNum = 1;

	printf("++%d : %d\n\n", exNum, ++exNum);

	exNum = 1;

	printf("%d++ : %d\n\n", exNum, exNum++);
*/
/*
	// To cast a value
	int numberEx = 12;
	
	int numberEx2 = 14;

	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx / numberEx2);
*/

// Tutorial 2

	//gcc ProgramName.c -o ProgramName
	//./ProgramName ./a.out
	printf("\n");
/*
	int num1 = 1, num2 = 2;

	printf("Is 1 > 2 : %d\n\n", num1 > num2);

	if(num1 > num2){

		printf("%d is greater then %d\n\n", num1, num2);

	} else if(num1 < num2){

		printf("%d is less then %d\n\n", num1, num2);

	} else {

		printf("%d is equal then %d\n\n", num1, num2);
	
	}
*/
	// && - And, || - Or, ! - Not (ex. !0 = 1, !1 = 0)
/*
	int custAge = 38;

	if(custAge > 21 && custAge < 35) printf("They are welcome\n\n");
	else printf("They are not welcome\n\n");

	printf("! turns a true into false : %d\n\n", !1);
*/

	// Missed less than 10 days work And
	// Has over 30,000 OR
	// Signed up more then 30 new customers
/*
	int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
	
	if(bobMissedDays < 10 && bobTotalSales > 30000 || bobNewCust > 30){

		printf("Bob Gets a Raise\n\n");

	} else {

		printf("Bob Doesn't Get a Raise\n\n");

	}
*/

/*
	int custAge = 38;

	// conditional operator
	char* legalAge = (custAge > 21) ? "true" : "false"; 

	printf("Is the customer of legal age? %s\n\n", legalAge);

	int numOfProducts = 10;

	printf("I brought %s products\n\n", (numOfProducts > 1) ? "many" : "one");
*/

	// don't use %d, use %zu instead
/*
	printf("A char takes up %zu bytes\n\n", sizeof(char));

	printf("A int takes up %zu bytes\n\n", sizeof(int));

	printf("A long int takes up %zu bytes\n\n", sizeof(long int));

	printf("A float takes up %zu bytes\n\n", sizeof(float));

	printf("A double takes up %zu bytes\n\n", sizeof(double));
*/
	// 1 byte = 8 bits





















	return 0;
}
