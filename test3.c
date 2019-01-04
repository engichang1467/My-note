#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>

// gcc -std=c99 test3.c
//./a.out

// Tutorial 5

/*
struct dogFavs {

	char *food;
	char *friend;
	
};

// typedef - to shorten struct dog

typedef struct dog{

	//const - constant
	const char *name;
	const char *breed;
	int avgHeightCm;
	int avgWeightLbs;

	struct dogFavs favoriteThings;

} dog;
*/

/*
void getDogInfo(struct dog theDog) {
	
	printf("\n");

	printf("Name: %s\n\n", theDog.name);
	printf("Breed: %s\n\n", theDog.breed);
	printf("Avg Height: %d cms\n\n", theDog.avgHeightCm);
	printf("Avg Weight: %d lbs\n\n", theDog.avgWeightLbs);

}

void getMemoryLocations(struct dog theDog){


	// Don't use %d, ue %p instead
	printf("Name Location: %p\n\n", theDog.name);
	printf("Breed Location: %p\n\n", theDog.breed);
	printf("Height Location: %p\n\n", &theDog.avgHeightCm);
	printf("Weight Location: %p\n\n", &theDog.avgWeightLbs);

}
*/

/*
void getDogsFavs(dog theDog){

	printf("\n");

	printf("%s loves %s and his friend is %s\n\n", 
		theDog.name,
		theDog.favoriteThings.food,
		theDog.favoriteThings.friend);

}

void setDogWeightPtr(dog *theDog, int newWeight){

	(*theDog).avgWeightLbs = newWeight;

	//printf("The weight was changed to %d\n\n", (*theDog).avgWeightLbs);

	// Another way
	printf("The weight was changed to %d\n\n", theDog->avgWeightLbs);

}
*/

/*
typedef struct product{

	const char *name;
	float price;


	struct product *next;
	
} product; //must put product down here too if you want to do type definition

void printLinkedList(product *pProduct){

	while(pProduct != NULL){

		printf("A %s costs %.2f\n\n", 
			(*pProduct).name,
			pProduct->price);

		pProduct = pProduct->next;
	}
}
*/

/*
void noMoreNewline(char* theString){

	char * isANewline;

	// strrchr() - it returns the last occurence of wahtever we're looking for
	isANewline = strrchr(theString, '\n'); 	// this is looking for a new line \n

	if(isANewline){

		*isANewline = '\0';

	}

}


// This function will go through every element in the array, and convert them into lowercase
void makeLowercase(char* theString){

	int i = 0;

	while(theString[i]){

		theString[i] = tolower(theString[i]);
		i++;

	}
}

void getCharInfo(){

	char theChar;

	while((theChar = getchar()) != '\n'){

		printf("Letter or Number %d\n\n", isalnum(theChar));

		printf("Alphabetic Char %d\n\n", isalpha(theChar));

		printf("Standard Blank %d\n\n", isblank(theChar));

		printf("Ctrl Char %d\n\n", iscntrl(theChar));

		printf("Number Char %d\n\n", isdigit(theChar));

		printf("Anything But Space %d\n\n", isgraph(theChar));

		printf("Lowercase %d\n\n", islower(theChar));

		printf("Uppercase %d\n\n", isupper(theChar));

		printf("Punctuation %d\n\n", ispunct(theChar));

		printf("Any Space %d\n\n", isspace(theChar));

	}
}

*/

/*
struct product{

	float price;
	char productName[30];
	
};
*/

// Tutorial 9
/*
struct  product{

	float price;
	char productName[30];

	struct product *next;
	
};

struct product *pFirstNode = NULL;
struct product *pLastNode = NULL;

void createNewList(){

	struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));
	

	pNewStruct->next = NULL;	

	printf("Enter Product Name: ");
	scanf("%s", (pNewStruct)->productName);

	printf("Enter Product Price: ");
	scanf("%f", &(pNewStruct)->price);

	pFirstNode = pLastNode = pNewStruct;
}

void inputData(){

	if(pFirstNode == NULL){

		createNewList();

	} else {

		struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

		printf("Enter Product Name: ");
		scanf("%s", (pNewStruct)->productName);

		printf("Enter Product Price: ");
		scanf("%f", &(pNewStruct)->price);

		if(pFirstNode == pLastNode){

			pFirstNode->next = pNewStruct;

			pLastNode = pNewStruct;

			pNewStruct->next = NULL;

		} else {

			pLastNode->next = pNewStruct;

			pNewStruct->next = NULL;

			pLastNode = pNewStruct;

		}

	}	

}

void outputData(){

	struct product *pProducts = pFirstNode;

	printf("Products Entered\n\n");

	while(pProducts != NULL){

		printf("%s costs %.2f\n\n", pProducts->productName, pProducts->price);

		pProducts = pProducts->next;
	}

}
*/

// Tutorial 10
/*
struct product *pProductBeforeProductToDelete = NULL;

// How to find product?
struct product* searchForProduct(char * productName){

	struct product *pProductIterator = pFirstNode;

	while(pProductIterator != NULL){

		int areTheyEqual = strncmp(pProductIterator->productName, productName, 30);

		if(!areTheyEqual){

			printf("%s was found and it costs %.2f\n\n", pProductIterator->productName, pProductIterator->price);

			return pProductIterator;

		}

		pProductBeforeProductToDelete = pProductIterator;

		pProductIterator = pProductIterator->next;

	}

	printf("%s Wasn't Found\n\n", productName);

	return NULL;
	
};



// How to remove product
void removeProduct(char * productName){

	struct product *pProductToDelete = NULL;

	pProductToDelete = searchForProduct(productName);

	if(pProductToDelete != NULL){

		printf("%s Was Deleted\n\n", productName);

		if(pProductToDelete == pFirstNode){

			pFirstNode = pProductToDelete->next;

		} else {

			pProductBeforeProductToDelete->next = pProductToDelete->next;


		}

		free(pProductToDelete);

	} else {

		printf("%s Was Not Found", productName);

	}

}
*/


// Tutorial 14
/*
int baseToDecimal(char* number, int baseFrom, int sizeOfNumber){

	int result = 0;
	int toThePowerOf = 0; // 8^0, 8^1, 8^2....

	// To cycle through all the letters in the array starting with the last one
	for(int i = (sizeOfNumber - 2); i >= 0; --i){

		if(isalpha(number[i])){

			int charCode = ((int)tolower(number[i])) - 87;

			result += charCode * pow(baseFrom, toThePowerOf);
		
		} else {

			result += (number[i] - '0') * pow(baseFrom, toThePowerOf);  
			// use this "gcc -std=c99 filename.c -lm" to compile when you have pow()

		}

		toThePowerOf++;

	}

	printf("%s in the base %d equals %d in base 10\n", number, baseFrom, result);

	return result;
}
*/

// ***Tutorial 13
// Converting base 10 to base 2, 8, and 16
/*
char * convertBase(unsigned int numberToConvert, int base){

	char buffer[33];
	char *pConvertedNumber;

	char allValues[] = "012345689abcdef";

	if(base < 2 || base > 16){

		printf("Enter a Number Between 2 and 16\n");
		exit(1);

	}

	pConvertedNumber = &buffer[sizeof(buffer)-1];

	*pConvertedNumber = '\0';

	do{

		int value = numberToConvert % base;

		pConvertedNumber = pConvertedNumber - 1;

		*pConvertedNumber = allValues[value];

		numberToConvert /= base; // numberToConvert = numberToConvert / 2;

	} while(numberToConvert != 0);	

	printf("%s", pConvertedNumber);

	return pConvertedNumber;

}
*/

// Tutorial 15
char * convertBase(unsigned int numberToConvert, int base, char *pConvertedNumber){

	

	char allValues[] = "012345689abcdef";

	if(base < 2 || base > 16){

		printf("Enter a Number Between 2 and 16\n");
		exit(1);

	}

	pConvertedNumber[32] = '\0';

	do{

		int value = numberToConvert % base;

		pConvertedNumber = pConvertedNumber - 1;

		*pConvertedNumber = allValues[value];

		numberToConvert /= base; // numberToConvert = numberToConvert / 2;

	} while(numberToConvert != 0);	

	return pConvertedNumber;

}

int main(void) {

/*	
	printf("\n");
	struct dog cujo = {"Cujo", "Saint Bernard", 90, 264};

	getDogInfo(cujo);

	struct dog cujo2 = cujo;

	getMemoryLocations(cujo);

	getMemoryLocations(cujo);
*/

/*
	dog benji = {"Benji", "Silky Teerrier", 25, 9, {"Meat", "Joe Camp"}};

	//getDogsFavs(benji);	

	setDogWeightPtr(&benji, 11);

	printf("The weight in Main() %d\n\n", benji.avgWeightLbs);
*/

// Tutorial 6

/*
	//union
	typedef union{

		short individual;
		float pound;
		float ounce;

	} amount;

	amount orangeAmt = {.ounce = 16};

	orangeAmt.individual = 4;

	// use %ld to get the address in decimal instead of %d

	printf("Orange Juice Amount: %.2f : Size: %ld\n\n", 
		orangeAmt.ounce, 
		sizeof(orangeAmt.ounce));

	printf("Orange Juice Amount: %d : Size: %ld\n\n", 
		orangeAmt.individual, 
		sizeof(orangeAmt.individual));

	orangeAmt.pound = 1.5;

	printf("Orange Juice Amount: %.2f : Size: %ld\n\n", 
		orangeAmt.pound, 
		sizeof(orangeAmt.pound));

	// use an union inside of a struct
	typedef struct{

		char *brand;
		amount theAmount;
		
	} orangeProduct;

	orangeProduct productOrdered = {"Chiquita", 
		.theAmount.ounce = 16}; 

	printf("You bought %.2f ounces of %s orange\n\n",
		productOrdered.theAmount.ounce,
		productOrdered.brand);	

	// Enumerated type - use it whenever you know that you'll never ever need anything but the values that go inside of here
	typedef enum{ INDIV, OUNCE, POUND } quantity;

	quantity quantityType = OUNCE;

	// Homework: put this quantity inside of the struct above and make it work

	orangeAmt.individual = 4;

	if(quantityType == INDIV) {

		printf("You brought %d oranges\n\n", 
			orangeAmt.individual);

	} else if(quantityType == OUNCE) {

		printf("You brought %.2f oranges\n\n", 
			orangeAmt.ounce);

	} else {

		printf("You brought %.2f pounds of oranges\n\n", 
			orangeAmt.ounce);

	}
*/

/*
// Recursive structure & Linked list	

	// linked list does not have a fixed length
	// linked list - it can store an unlimited number of items 	
	product tomato = {"Tomato", .51, NULL};
	product potato = {"Potato", 1.21, NULL};
	product lemon = {"Lemon", 1.69, NULL};
	product milk = {"Milk", 3.09, NULL};
	product turkey = {"Turkey", 1.86, NULL};

	// Turn them into a linked list
	tomato.next = &potato;
	potato.next = &lemon;
	lemon.next = &milk;
	milk.next = &turkey;

	// add new item into the linked list
	product apple = {"Apple", 1.58, NULL};

	lemon.next = &apple;
	apple.next = &milk;

	printLinkedList(&tomato);
*/

// Tutorial 7

/*	
	// Boolean variable;  1 = true, 0 = false
	_Bool isANumber;

	int number;
	int sumOfNumbers = 0;

	printf("Enter a Number: ");

	// This is checking if the user inputs a number, it'll be true
	isANumber = (scanf("%d", &number) == 1);

	while(isANumber){

		sumOfNumbers = sumOfNumbers + number;

		printf("Enter a Number: ");

		isANumber = (scanf("%d", &number) == 1);
	
	}

	printf("The Sum is %d\n\n", sumOfNumbers);
*/

/*	
	// get character & put character
	char theChar;

	while((theChar = getchar()) != '~'){

		putchar(theChar);

	}
*/
	// Buffer: a temperary storage area in memory; a pointer to a place inside of memory w/o a specified size
	// this is a example of line Buffering
	// Line Buffering: it stores data in a buffer until a new line is entered
	// B/c we're using a buffer, get character(getchar()) will wait until the enter button is pressed, and then going to push all the individual characters on the screen

	// Gets puts F gets & F puts
/*
	char name[50];

	printf("What is your name? ");

	// gets() & puts()
	// Terminal won't run this
	gets(name); 	// Warning: when you use gets(), make sure don't go over the 50 character limit b/c gets() doesn't check if you reached the end of your avaliable storage

	puts("Hi");		// puts() - it's receiving a string and print it out followed by the newline b/x
	puts(name);
	 

	// fgets() & fputs()
	// Terminal runs this
	
	fgets(name, 50, stdin);

	fputs("Hi ", stdout);
	fputs(name, stdout);
*/

/*
	char * randonString = "Just some random stuff";

	// The short way
	while(*randonString){

		putchar(*randonString++);


	}

	// Here's the long way to do this
	int i = 0;

	while(randonString[i] != '\0'){
		putchar(randonString[i++]);
	}
*/

/*	

	char doYouWantToQuit[10];

	printf("Enter quit to quit: ");

	fgets(doYouWantToQuit, 10, stdin);

	noMoreNewline(doYouWantToQuit);

	//printf(doYouWantToQuit); 


	makeLowercase(doYouWantToQuit); // this will be used when user types in all caps "QUIT"

	// To allow the user to enter information unti they enter quit
	while(strcmp(doYouWantToQuit, "quit")){

		printf("Enter quit to quit: ");

		fgets(doYouWantToQuit, 10, stdin);

		noMoreNewline(doYouWantToQuit);

		makeLowercase(doYouWantToQuit);
	}

	printf("Thank you for typing %s\n\n", doYouWantToQuit);
*/

	//getCharInfo();

// Tutorial 8
	// Memory allocation
	// malloc() - allocates memory at runtime 
/*	
	int amtOfNumbersToStore;

	printf("How many numbers do you want to store: ");

	scanf("%d", &amtOfNumbersToStore);

	int * pRandomNumbers;

	pRandomNumbers = (int *) malloc(amtOfNumbersToStore * sizeof(int));

	if(pRandomNumbers != NULL){

		int i = 0;

		printf("Enter a Number or Quit: ");

		while(i < amtOfNumbersToStore && scanf("%d", &pRandomNumbers[i]) == 1){

			printf("Enter a number or Quit: ");

			i++;
		}

		printf("\nYou entered the numbers\n");

		for(int j = 0; j < i; j++){

			printf("%d\n", pRandomNumbers[j]);

		}
	}

	// free() - it returns all of the memory that was allocated by the memory allocator function back to the system to use in this program 
	// This fucntion is used for is when you are allocating large box of memory over & over again w/o returning it 
	free(pRandomNumbers);
*/

	// How to dynamically allocate memory inside of here & store strut inside of it

	// Create a pointer to the struct

/*	
	struct product *pProducts;
	int i, j;

	int numberOfProducts;

	printf("Enter the Number of Products to Store: ");

	scanf("%d", &numberOfProducts);

	pProducts = (struct product *) malloc(numberOfProducts * sizeof(struct product));

	for(i = 0; i < numberOfProducts; i++){

		printf("Enter a product Name: ");

		scanf("%s", (pProducts +i)->productName); //  You don't need the & operator, since declaring char productName[30];

		printf("Enter a product Price: ");

		scanf("%f", &(pProducts +i)->price);
	}

	printf("Products Stored\n");

	for(j = 0; j < numberOfProducts; ++j){

		printf("%s\t%.2f\n", (pProducts+j)->productName, (pProducts+j)->price);
	
	}

	free(pProducts);
*/

// Tutorial 9

	// Struct Linked Lists
/*
	inputData();
	inputData();
	inputData();

	outputData();
*/

// Tutorial 10

	// How to find product
	//searchForProduct("Tomato");

	// How to remove product
/*
	removeProduct("Tomato");

	outputData();
*/

// ***Tutorial 11 - file I/O

	// How to write to a file
	//int pRandomNumber;
/*
	// Create a buffer to store the information
	char buffer[1000];


	FILE *pFile; // create a file pointer

	pFile = fopen("randomwords.txt","r+"); // this will open the file or create a file (if it doesn't exist yet)

	// a - Append
	// a+ - append writing or reading
	// r - Read
	// r+ - open for reading & writing
	// w - write
	// w+ - read & write 

	if(!pFile){

		printf("Error: Couldn't write to File");

		return 1;

	}
*/
	/*
	for(int i = 0; i < 10; i++){

		pRandomNumber = rand() % 100;
		fprintf(pFile, "%d\n", pRandomNumber);

	}
	*/

	// This is going to read 1000 char per line until fgets is going to return a value of NULL(when it reaches to the end of the file)
	/*
	while(fgets(buffer, 1000, pFile) != NULL){

		printf("%s", buffer);

	}
	*/

	// Another way
	// fscanf() - allows us to pass the file & data type to read 
	/*
	while(fscanf(pFile, "%s", buffer) == 1){

		puts(buffer);

	}
	*/
/*
	// To print directly to the file
	fputs("Messing with string", pFile);

	// To move around within this data that I just put inside of the file
	// fseek(file_name, # of characters, SEEK)
	fseek(pFile, 12, SEEK_SET);


	// SEEK_SET - start from the beginning of the file
	// SEEK_CUR - Move based off of current position
	// SEEK_END - Move based off of starting at end

	fputs(" Files  ", pFile);

	fseek(pFile, 0, SEEK_SET);

	fseek(pFile, 0, SEEK_END);

	// To get how many bytes I am from the beginning of the file
	long numberOfBytes = ftell(pFile); 

	printf("Number of Bytes in File : %ld\n", numberOfBytes);


	fseek(pFile, -20, SEEK_CUR);


	// printf("Success Writing to File\n");
	printf("Success Reading from File\n");


	while(fgets(buffer, 1000, pFile) != NULL){

		printf("%s", buffer);

	}

	printf("\n");


	if(fclose(pFile) != 0){

		printf("Error: File Not Closed\n");

	}
*/

// Turtorial 12

	/*
	FILE *pFile;

	//char * buffer;

	// size_t - datatype that's used to  represent the size of an element in bytes
	//size_t dataInFile;

	//long fileSize;

	pFile = fopen("randomnums.bin", "rb+");

	if(pFile == NULL){

		perror("Error Occured");
		printf("Error Code: %d\n", errno);

		printf("File Being Created\n\n");

		pFile = fopen("randomnums.bin", "wb+");

		if(pFile == NULL){

			perror("Error Occured");
			printf("Error Code: %d\n", errno);
			exit(1);

		}

	} 

	int randomNumbers[20];

	for (int i = 0; i < 20; i++){

		randomNumbers[i] = rand() % 100;
		printf("Number %d is %d\n", i, randomNumbers[i]);

	}

	fwrite(randomNumbers, sizeof(int), 20, pFile);

	long randomIndexNumber;
	int numberAtIndex;

	printf("Which Random Number do you want? ");

	scanf("%ld", &randomIndexNumber);

	fseek(pFile, randomIndexNumber * sizeof(int), SEEK_SET);

	fread(&numberAtIndex, sizeof(int), 1, pFile);

	printf("The Random Number at Index %ld is %d\n", randomIndexNumber, numberAtIndex);
	*/

	/*
	// write my name in the file
	char name[] = "Michael Chang";

	// To write binary data to a file
	// fwrite(pointer, size of each element iin th array, # of elements that're plan to write on the file, the actual file)
	fwrite(name, sizeof(name[0]), sizeof(name)/sizeof(name[0]), pFile);

	fseek(pFile, 0, SEEK_END);

	fileSize = ftell(pFile);

	rewind(pFile);

	buffer = (char*) malloc(sizeof(char)*fileSize);

	if(buffer == NULL){

		perror("Error Occured");
		printf("Error Code: %d\n", errno);
		exit(2);


	}

	// To read this info from our file into our new buffer
	dataInFile = fread(buffer, 1, fileSize, pFile);


	if(dataInFile != fileSize){

		perror("Error Occured");
		printf("Error Code: %d\n", errno);
		exit(3);

	}

	printf("%s\n", buffer);

	printf("\n");
	*/

	//fclose(pFile);
	//free(buffer);

// ***Tutorial 13 - Converting from base 10 to base 2, 8, and 16

/*
	// Converting base 10 to 2
	unsigned int numberOne = 60; // 111100

	printf("%d in Base 2 = ", numberOne);
	convertBase(numberOne, 2);
	printf("\n");

	printf("%d in Base 8 = ", numberOne);
	convertBase(numberOne, 8);
	printf("\n");

	printf("%d in Base 16 = ", numberOne);
	convertBase(numberOne, 16);
	printf("\n");


// ***Tutorial 14 - Conversting other bases to base 10

	char numberToConvert[] = "3C";

	baseToDecimal(numberToConvert, 8, sizeof(numberToConvert));
*/
	// Know your key code
	//printf("a : %d\n", 'a');
	//printf("A : %d\n", 'A');
	//printf("b : %d\n", 'b');
	//printf("c : %d\n", 'c');
	//printf("d : %d\n", 'd');
	//printf("e : %d\n", 'e');
	//printf("f : %d\n", 'f');

// Tutorial 15

	unsigned int numberSix = 6;  // 110
	unsigned int numberSeven = 7;  // 111

	char *pConvertedNumber;
	pConvertedNumber = malloc(33 * sizeof(char));

	//printf("%s\n", convertBase(numberSix, 2, pConvertedNumber));

	// and operation
	unsigned int andSolution = numberSix & numberSeven; // 110 & 111 = 110

	// or operation
	unsigned int orSolution = numberSix | numberSeven; // 110 | 111 = 111

	// exclusive Or
	unsigned int exOrSolution = numberSix ^ numberSeven;

	// ***1's compliment operator
	unsigned int onesCompSolution = ~numberSix;

	// shift operator
	unsigned int shiftLeftTwo = numberSix << 2;
	unsigned int shiftRightTwo = numberSix >> 2;

	// Bit masking
	unsigned int analyzeMyBits = 170; // 10101010

	unsigned int theMask = 15;  // 00001111

	unsigned int last4Bits = analyzeMyBits & theMask;

	printf("Last 4 bits : %s\n", convertBase(last4Bits, 2, pConvertedNumber));

	//printf("%s >> 2 = ", convertBase(numberSix, 2, pConvertedNumber));
	//printf("%s = ", convertBase(numberSeven, 2, pConvertedNumber));
	//printf("%s = %d\n\n", convertBase(shiftRightTwo, 2, pConvertedNumber), shiftRightTwo);

	//printf("Negative of %d = %d\n\n", numberSix, (onesCompSolution + 1));

	free(pConvertedNumber);



	return 0;



}