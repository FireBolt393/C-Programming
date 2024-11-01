//  Table Of Contents:
//  Print statement............................................................................................ Line 53
//  Escape characters.......................................................................................... Line 58
//  Declaring variables........................................................................................ Line 75
//  Data types................................................................................................. Line 91
//  Decimal precision with format specifier.................................................................... Line 118
//  constants.................................................................................................. Line 138
//  Arithmetic operators....................................................................................... Line 143
//  User inputs................................................................................................ Line 159
//  math functions............................................................................................. Line 173
//  comparison and logical operators........................................................................... Line 187
//  conditional statements: comparison operators............................................................... Line 203
//  switch cases............................................................................................... Line 218
//  switch case with characters................................................................................ Line 250
//  conditional statements: logical operators.................................................................. Line 281
//  ternary operators.......................................................................................... Line 308
//  some operations on string.................................................................................. Line 313
//  for loop................................................................................................... Line 346
//  while loop................................................................................................. Line 355
//  do while loops............................................................................................. Line 373
//  nested loops............................................................................................... Line 398
//  arrays..................................................................................................... Line 433
//  2D arrays.................................................................................................. Line 467
//  array of strings........................................................................................... Line 483
//  sorting elements within an array........................................................................... Line 506
//  Enum....................................................................................................... Line 526
//  time and random............................................................................................ Line 534
//  bitwise operators.......................................................................................... Line 543
//  memory..................................................................................................... Line 572
//  functions: Refer notes2 to learn about functions........................................................... Line 592
//  pointers: Refer pointers to learn about pointers........................................................... Line 596
//  dynamic memory allocation.................................................................................. Line 600
//  file operations............................................................................................ Line 702

#include <stdio.h>
#include <stdbool.h> // used to store and access bool values
#include <math.h> // used for math functions
#include <ctype.h> // used for string operations
#include <string.h> // used for more string operations
#include <stdlib.h> // used to generate random numbers
#include <time.h> // self explanatory

// All the code should be enclosed within the main function. int is the datatype that is returned by the main function.
// C compiler, by default recognizes this and calls this function to execute the code inside it.
// The main function returns 0 if the code executes successfully, else returns false.
// You will learn more about functions later.

int main() {
    /*

// ===============================================================================================================================================================================================

    // printf: It is used to print a statement onto the console
    printf("Hello world!"); // Enclose all strings within "" and add ; at the end of everything.

// ===============================================================================================================================================================================================
    
    // escape characters:

    // \a -- alert
    // \r -- carriage return
    // \t -- horizontal tab
    // \n -- newline character
    // \v -- vertical tab
    // \\ -- backslash
    // \' -- apostrohpe
    // \" -- double quotation mark

    printf("1\t2\t3\t4\n"); // adds tab spaces in between
    printf("hello\n"); // adds a new line character at the end
    printf("\"I said, how are you\"\n"); // puts the statement inside the quotes

// ===============================================================================================================================================================================================

    // declaring variables:
    int x;
    x = 12;
    // or
    int y = 21;
    float gpa = 2.05;
    char grade = 'A'; // single character. Use single quotes to store a char value
    char name[] = "Razor Callahan"; // c is not object oriented, so there is no str or String data type

    // printing variables with string:
    printf("Hello %s \n", name); // here %s is the format specifier for strings. %s is used in the position where the name variable should be displayed.
    printf("you are %d years old \n", y); 
    printf("You're gpa is %f\n", gpa);

// ===============================================================================================================================================================================================

    // data types:
    char a = 'c'; // format specifier: %c.
    char aa = 100; // char can also be used to store integers within the range -128 to 127
    printf("%d\n", aa); // this will display the value of aa
    printf("%c\n", aa); // this will display the corresponding ascii value of the number
    char b[] = "bro"; // This is basically the string datatype. format specifier: %s

    unsigned char aaa = 255; // this disregards any sign that we prefix with the number.
                             // this doubles the range of numbers that can be stored. (0 to 255)
                             // format specifier: %d.

    float c = 3.1415; // format specifier: %f. can be stored 6-7 digits
    double d = 3.1415845545454548; // format spcifier: %lf. can be stored 15 - 16 digits.

    bool e = true; // format specifier: %d. include stdbool.h at the top. 1 represents true and 0 represents false

    short int f = 32767; // format specifer: %d. Range: -32768 to 32767
    unsigned short int ff = 65535; // ranges from 0 to 65535
    int g = 2147483647; // This is upper limit of int . format specifier: %d. Range: negative 2 billion to positive 2 billion
    unsigned int gg = 4294967295; // upper limit of unsigned int. format speficier: %u. range: 0 to positive 4 billion

    long long int h = 9223372036854775807; // upper limit of long long int. normal int is nothing but long int.
                                           // format specifier: %lld
    unsigned long long int hh = 1844674403709551615U; // format specifer: %llu. Add U at the end of long long int

// ===============================================================================================================================================================================================

    // decimal precision with format specifier:

//    %.no = no specifies the number of digits that should be displayed after decimal point
//    %no = no of spaces to the left (right alignment)
//    %-no = no of spaces to the right (left alignment)

    // example:
    printf("This is a float value upto 2 decimal places: %.2f\n", c);
    printf("These are right aligned float values:\n");
    printf("%8.2f\n", c);
    printf("%8.3f\n", c);
    printf("%8.4f\n", c);

    printf("These are left aligned flat values:\n");
    printf("%-8.2f\n", c);
    printf("%-8.3f\n", c);
    printf("%-8.4f\n", c);

// ===============================================================================================================================================================================================

    // constants:
    const float PI = 3.1415; // Attempting to change this value will throw an error.

// ===============================================================================================================================================================================================

    // Arithmetic operators:

//    + addition
//    - subtraction
//    * multiplication
//    / division
//    % modulus
//    ++ increment
//    -- decrement

//    int x = 5;
//    x++ // This returns the value of x and then increments the value
//    ++x // This increments x and then returns its value

// ===============================================================================================================================================================================================

    // Get input from user:
    int age;
    char nam[255]; // 255 is the array size that should not be exceeded.
    printf("What is your name? ");
    scanf("%s", &nam); // Inputs with space and tab characters will not be accepted
//    scanf("%[^\n]", &nam);  Use this format to accept inputs that contains space and tabs.
    // or
//    fgets(nam, 255, stdin); // we can use this as well
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Your name is %s and you are %d years old\n", nam, age);

// ===============================================================================================================================================================================================

    // math functions: math.h should be included
    double A = sqrt(9); // returns the square root of the number
    double B = pow(2, 4); // raises the first number to the power of second number
    int C = round(3.14); // rounds of the given value
    int D = ceil(3.14); // rounds up the value
    int E = floor(3.14); // rounds down the value
    double F = fabs(-100); // returns the absolute value
    double G = log(3); // returns the log of the number
    double H = sin(45); // sin of the entered value
    double I = cos(45); // cos of the entered value
    double J = tan(45); // tan of the entered value

// ===============================================================================================================================================================================================

    // comparison and logical operators:

//    >= greater than or equal to
//    <= lesser than or equal to
//    == is equal to
//    != is not equal to
//    > is greater than
//    < is lesser than


//    && logical AND: returns true if both conditions are true
//    || logical OR: returns true if any one condition is true
//    ! logical NOT: returns true if the condition is false. vice versa

// ===============================================================================================================================================================================================

    // conditional statements: comparison operators

    if(age >= 18) {
        printf("You can apply for credit card.");

    } else if(age <= 18 && age >= 0) {
        printf("you cannot apply for credit card yet!");

    } else {
        printf("You haven't born yet!");

    }

// ===============================================================================================================================================================================================

    // switch cases:
    int num;

    printf("\nHow many programming languages do you know? \n");
    if (scanf("%d", &num) == 1) { // scanf function returns 1 if the entered input is an integer. hence it is being compared to 1
        switch(num) {
            case 0:
                printf("You need to start coding!\n");
                break;

            case 1:
                printf("You're a beginner!\n");
                break;

            case 2:
                printf("You're an intermediate!\n");
                break;

            case 3:
                default:
                    if (num >= 3) {
                        printf("You're a developer!\n");
                    }
                    break;
        }
    } else {
        // Handle invalid (non-integer) input
        printf("Invalid input! Please enter a valid number.\n");
    }

// ===============================================================================================================================================================================================

    // switch case with characters

    char grades;
    printf("Enter your grade: ");
    scanf(" %c", &grades);

    grades = tolower(grades); // toupper/tolower requires <ctypes.h> to be included.
                              // whatever the input will be given will be converted to lowercase and compared to the cases.

    switch(grades){

    case 'a': // change this to 'A' (uppercase) if you are using toupper() function
        printf("Great! You're doing well.\n");
        break;

    case 'b':
        printf("Nice! But you can improve.");
        break;

    case 'c':
        printf("You need to work harder!");
        break;

    default:
        printf("How can you score something like this??");
        break;

    }

// ===============================================================================================================================================================================================

    // conditional statements: logical operators
    
    float temp = 25;
    if (temp >= 20 && temp <= 30) { // AND operator
        printf("The weather is pleasant!\n");
    }
    else {
        printf("The weather is bad!\n");
    }

    if (temp <= 0 || temp >= 30){ // OR operator
        printf("The weather is bad!\n");
    }
    else {
        printf("The weather is pleasant!\n");
    }

    if (!(temp >= 30 || temp <= 0)) { // NOT with OR operator
        printf("The weather is pleasant!\n");

    }
    else {
        printf("The weather is bad!\n");
    }

// ===============================================================================================================================================================================================

    // ternary operators: (condition) ? (block of code if true) : (block of code if false);
    (temp <= 0 || temp >= 30) ? printf("The weather is bad!\n") : printf("The weather is pleasant!\n");

// ===============================================================================================================================================================================================

    // some operations on string: include string.h at the top

    char string1[] = "Yo";
    char string2[] = "Wassup";

    strlwr(string1); // converts all characters of the string to lowercase
    strupr(string2); // converts all characters of the string to upppercase
    strcat(string1, string2); // joins both the strings
    strncat(string1, string2, 1); // joins the first letter of string2 to string1. If 2 is passed, two letters will be joined
    strcpy(string1, string2); // copies the  value of string2 to string 1
    strncpy(string1, string2, 2); // replaces the first two characters of string1 with first two characters of string2

    strset(string1, '?'); // replaces all the characters of string1 with '?'
    strnset(string1, '?', 2); // replaces the first two characters of string1 with '?'
    strrev(string1); // reverses the string

    // the following functions will return integers

    int result1 = strlen(string1); // returns the length of the string
    int result2 = strcmp(string1, string2); // String compare: is used to compare the characters in two strings. If same, it returns 0.
    int result3 = strncmp(string1, string2, 1); // String n compare: is used to compare the n characters of two strings. If same, it returns 0. Currently set to 1
    int result4 = strcmpi(string1, string2); // same as string compare. But ignores case.
    int result5 = strnicmp(string1, string1, 1); // same as string n compare. But ignores case.

    printf("%s %s\n", string1, string2);
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);
    printf("%d\n", result5);

// ===============================================================================================================================================================================================

    // for loop: syntax: for (index/variable; break condition; increment/decrement) {code}

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);

    }

// ===============================================================================================================================================================================================

    // while loop: syntax: while(condition){code}

    char name[25];

    printf("What is your name?: ");
    scanf("%s", &name);

    while (strlen(name) == 0) {
        printf("You did not enter your name!\n")
        printf("What is your name?: ");
        scanf("%s", &name);

    }

    printf("Your name is %s", name);

// ===============================================================================================================================================================================================

    // do while loops:

    // while loops check the condition before executing the block of code.
    // do while loops, execute the code first and then check for the condition.
    // This ensures that the code is executed atleast once

    // syntax: do {code} while (condition);

    int no = 0;
    int sum = 0;


    do {
        printf("Enter a number: ");
        scanf("%d", &no);
        if (no > 0){
            sum += no;
        }

    } while (no > 0);

    printf("%d", sum);

// ===============================================================================================================================================================================================

    // nested loops:
    int rows;
    int columns;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the character: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    // continue: skips the rest of the code and forces the next iteration
    // break: breaks the loop

    for (int i = 1; i <= 20; i++) {
        if (i == 10){
            continue;
        } else if (i == 15){
            break;
        }
        printf("%d\n", i);
    }

// ===============================================================================================================================================================================================

    // array: a data structure that can store many values of the same type
    // indexing: indexing is the position of the elements in an array. 
    // indexing starts from 0 (first element's position) t0 n - 1 (last element's position) where n is the length of the array

    int prices1[] = {1, 2, 3, 4, 5}; // static declaration of array;

    // declaring an array using a for loop

    int len;

    printf("Enter the length of the array: \n");
    scanf("%d", &len);

    int prices[len];

    for (int i = 1; i <= len; i++) {
        int value;

        printf("Enter the value needed to be appended: ");
        scanf("%d", &value);

        prices[i - 1] = value;
    }

    // accessing the elements of the array;
    printf("%d\n", prices[0]); // 0 is the index of the required element

    // accessing the elements using a for loop
    for (int i = 0; i < len; i++){
        printf("%d\n", prices[i]);
    }

// ===============================================================================================================================================================================================

    // 2D array: an array in which each element is an array:

    int twoDarray[][3] = { // length of sub array should be provided inside of second []
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d", twoDarray[0][0]); // accessing the elements using index.
    // DIY: Access the elements of the array using for loop.

    // to get the size of the array
    int r = sizeof(twoDarray) / sizeof(twoDarray[0]); // dividing the size of array with sub array gives the number of rows
    int c = sizeof(twoDarray[0]) / sizeof(twoDarray[0][0]); // dividing the size of sub array with size of each element gives number of columns

// ===============================================================================================================================================================================================

    // array of strings:

    char cars[][10] = {"Mustang", "Corvette", "Camaro"}; // initialization of this array requires two sets of []. one to store a string of chars. the other to store multiple string of chars as elements.

    // to replace any element from the array: Here, replacing the first element with index 0
    strcpy(cars[0], "BMW"); // including string.h is necessary

    printf("%s", cars[0]);

    // to swap two strings:
    char x[15] = "water";
    char y[15] = "soda"; // it is necessary to put the buffer size to prevent unexpected behaviour if one string size is lesser than the other.
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s\n", x);
    printf("%s\n", y);

// ===============================================================================================================================================================================================

    // sorting elements within an array: Bubble sort
    int array[] = {0, 9, 3, 6, 2, 4};
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size - 1; i++ ){
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

// ===============================================================================================================================================================================================

    // Enum: enum is a user defined type of named integer identifiers
    enum Day{sun = 1, mon = 2, tue = 3, wed = 4, thurs = 5, fri = 6, sat = 7};

    enum Day today = wed;
    printf("%d", today);   // this returns the number assigned to wed

// ===============================================================================================================================================================================================

    // time and random:
    // use the current time to generate a seed for random number
    srand(time(0)); // if this seed is not used, the same number gets generated

    int number1 = (rand() % 6) + 1; // this gives us random numbers between 1 to 6
    printf("%d", number1);

// ===============================================================================================================================================================================================

    // bitwise operators

    // & Bitwise AND
    // | Bitwise OR
    // ^ Bitwise XOR
    // << Left shift
    // >> Right shift

    int X = 6; // 00000110
    int Y = 12; // 00001100
    int Z = 0; // 00000000

    Z = X & Y; // bitwise AND
    printf("AND: %d\n", Z);

    Z = X | Y; // bitwise OR
    printf("OR: %d\n", Z);

    Z = X ^ Y; // bitwise XOR
    printf("XOR: %d\n", Z);

    Z = X << 1; // left shift by 1 bit
    printf("left shift: %d\n", Z);

    Z = X >> 1; // right shift by 1 bit
    printf("right shift: %d\n", Z);

// ===============================================================================================================================================================================================

    // memory
    // memory: an array of bytes within RAM
    // memory block: a single unit within memory
    // memory address: the address of where a memory block is located
    // when we use &, we are specifying the address of the memory

    char A = 'X';
    char B = 'Y';
    char C = 'Z';

    printf("%d bytes\n", sizeof(A));
    printf("%d bytes\n", sizeof(B));
    printf("%d bytes\n", sizeof(C));
    printf("\n");
    printf("%p\n", &A); // %p format specifier is used to get the address of the variable A in hexadecimal
    printf("%p\n", &B);
    printf("%p\n", &C);

// ===============================================================================================================================================================================================

    // functions: Refer notes2 to learn about functions

// ===============================================================================================================================================================================================

    // pointers: Refer pointers to learn about pointers

// ===============================================================================================================================================================================================

    // dynamic memory allocation: malloc, calloc, realloc and free. include <stdlib.h> (Make sure to learn pointers before proceeding with this!)
    // these memory allocation operators are used to dynamically manage the memory for its efficient use
    // malloc is used to allocate some memory initially.
    // realloc is used to change the size of that memory
    // free is used to free the memory after usage. This is important to prevent memory leaks. 
    
    int capacity = 2;
    int count = 0;
    int user;
    
    int *array = (int*) malloc(capacity * sizeof(int)); // we are setting this as a pointer.
                                                      // by default, malloc returns a void datatype later that can be typecasted to anything
                                                      // here we have typecasted it to int to let the compiler know that the pointer returned is an integer
                                                      // we have set the current capacity to 2 elements. We can increase it later if necessary
    
    if (array == NULL) {

        printf("Memory allocation failed!");
        return 1;
    }
    while (1) { // use a loop to add elements
        
        printf("Enter your value. -1 to quit");
        scanf("%d", &user);
        
        if (user == -1) {
            break;
        }

        if (count == capacity) {

            capacity += 2;
            int *status = (int*) realloc(array, capacity * sizeof(int));

            if (status == NULL) {
                printf("Reallocation failed");
                free(array); // do not forget to free the array
                return 1;
            }

            array = status; // Update the original pointer to the new memory location
        }

        array[count++] = user;
        printf("%d\n",array[count - 1]);

    }
    
    printf("Values stored in array: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", array[i]);
    }
    free(array); // do not forget to free the array after using the values.

    // calloc OR contigious allocation:
    // calloc is used to allocate the memory dynamically for an array similar to malloc
    // the key difference is that, we can pass the initial number of elements and size of each element separately as two parameters
    // this sets all the bits of every element to 0. 
    // this is useful to have a default value of 0 in the beginning.

    int capacity = 2;
    int index = 0;
    int *array = (int*) calloc(capacity, sizeof(int));
    int user;

    if (array == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    while (1) {
        printf("Enter the value to store in the array. Enter -1 to break");
        
        scanf("%d", &user);
        if (user == -1) {
            break;
        }

        if (index == capacity) {

            capacity += 2;
            int *status = (int*) realloc(array, capacity * sizeof(int));

            if (status == NULL) {
                printf("Reallocation failed!");
                free(array);
                return 1;
            }
            array = status;
        }
        array[index++] = user;
    }

    printf("Elements in the array:\n");
    for (int i = 0; i < index; i++) {

        printf("%d\n", array[i]);
    }
    free(array); 

// ===============================================================================================================================================================================================

    // file operations (make sure to learn pointers before proceeding with this!)
    // write into a file

    FILE *pF = fopen("test.txt", "w"); // test.txt is the file name and "w" is write mode. Absolute path can also be given to create the file at specific locations
    //                                    example: c:\\users\\username\\Desktop\\test.txt
    fprintf(pF, "C programming speed run");
    fclose(pF);

    FILE *pF = fopen("test.txt", "a"); // "a" appends new text to the file without overwriting its contents. using "w" again will overwrite the text file
    fprintf(pF, "\nLets goooo");
    fclose(pF);

    // deleting the text file

    if(remove("test.txt") == 0) { // if file is removed, it returns 0.
        printf("File deleted successfully!");
    } else {
        printf("File couldn't be deleted!");
    }

    // reading the contents of a file
    FILE *pF = fopen("test.txt", "r"); // "r" specifies read mode

    // a check to ensure the file exists
    if (pF == NULL) {
        printf("Couldn't open the file!");

    } else {
        char buffer[255]; // a variable to store the content

        fgets(buffer, 255, pF); // this puts the very first line in buffer variable
        printf("%s\n", buffer);

        // to get all the content from the file
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }

    }

    fclose(pF); */

    return 0;

}

// ============================================================== THANK YOU ========================================================================================================================


