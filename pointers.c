// Table Of Contents:
// basic pointers .............................................................................................. Line 15
// returning a pointer from a function: ........................................................................ Line 34 
// returning a string from a function using pointer: ........................................................... Line 56 
// returning a 2d array from a function using pointer: ......................................................... Line 77 
// passing a pointer as argument to a function: ................................................................ Line 98 
// storing strings in variables and using them as elements of the array: ....................................... Line 117
// accessing members of struct using the pointer: .............................................................. Line 147

#include <stdio.h>
#include <string.h>

// ===============================================================================================================================================================================================

// basic pointers
// pointers are used to get the memory address of a variable

/*
int main() {

    int var = 5; // variable
    int *pVar = &var; // * is the pointer. &var is used to access the address of var

    printf("Address of var: %p\n", pVar); // %p is the format specifier to show the address in hex
    // address can be printed using &var as well (without using the pointer)
    printf("Address of var without using the pointer: %p\n", &var);
    printf("Value stored in var: %d\n", *pVar); // using * with pVar is dereferncing to access the value

    return 0;
}

// ===============================================================================================================================================================================================

// returning a pointer from a function:
// This method works only for datatypes that are not arrays

int* returns() { // suffixing * with datatype is necessary to return a pointer
    static int var = 5; // static keyword is necessary to make sure that the var doesnt die after exiting the function
    return &var; // returns the address of var

}

int main() {

    int *pVar = NULL;
    pVar = returns();

    printf("Address of var: %p\n", pVar);
    printf("Value stored in var: %d\n", *pVar); // dereference it

    return 0;
}

// ===============================================================================================================================================================================================

// returning a string from a function using pointer:

char* returns() {
    static char string[] = "hello world";
    return string; // this returns the string pointer directly. There's no necessity of prefixing & as arrays cannot be returned

}

int main() {

    char *pString = NULL;
    pString = returns();

    printf("Address of string: %p\n", pString);
    printf("Value stored in string: %s\n", pString); // do not dereference for arrays

    return 0;
}

// ===============================================================================================================================================================================================

// returning a 2d array from a function using pointer:
// lets return an array of string which is basically a 2d array

char (*returns())[25] { // Buffer size has to be set. In order to do that, the * should be inside of the () along with the function name
    static char stringArray[][25] = {"hello", "world"}; // The buffer size should be the same everywhere
    return stringArray;

}

int main() {

    char (*pStringArray)[25] = returns();

    printf("Address of the string Array: %p\n", pStringArray);
    printf("Value stored in string Array at index 0: %s\n", pStringArray[0]);
    printf("Value stored in string Array at index 1: %s\n", pStringArray[1]);
    return 0;
}

// ===============================================================================================================================================================================================

// passing a pointer as argument to a function:

int argument(int *p) {

    int *pointer = p;
    printf("%p", pointer);

    return 0;
}

int main() {

    int var = 5;
    argument(&var);
    return 0;
}

// ===============================================================================================================================================================================================

// storing strings in variables and using them as elements of the array: 
// Pointers are necessary to do this for flexibility

int main() {

    char s1[] = "hello";
    char s2[] = "world";

    // to pass these variables into an array:

//    char *array[] = { // we are pointing to the memory where the strings are stored
//        s1, s2
//    };

    char array[2][10]; // to store the variables without using pointers

    strcpy(array[0], s1);
    strcpy(array[1], s2);

    // accessing the elements of the array:

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%s\n", array[i]);

    }
    return 0;
}

// ===============================================================================================================================================================================================

// accessing members of struct using the pointer:

typedef struct {
    char name[25];
    int age;

} Person;

void pointer(char name[], int age, Person *p) { // datatype: Person(name of struct) and *p is the pointer

    strcpy(p->name, name); // we are getting a pointer of the struct Person. To access the member using the pointer, we use -> instead of dot(.)
    p->age = age;

    printf("name using pointer: %s\n", p->name);
    printf("age using pointer: %d\n", p->age);

}

int main() {

    char name[25];
    int age;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    Person person;

    pointer(name, age, &person);

    printf("name without using pointer: %s\n", person.name); // we are accessing the members without using pointers. hence dot(.) is used.
    printf("age without using pointer: %d\n", person.age);

    return 0;
} */

// ============================================================== THANK YOU ========================================================================================================================
