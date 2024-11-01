// Table Of Contents:
// functions, arguments, parameters and return statements: ..................................................... Line 14
// prototyping a function: ..................................................................................... Line 41 
// structs: .................................................................................................... Line 65 
// typedef: .................................................................................................... Line 97 
// typedef with structs: ....................................................................................... Line 114
// #define: .................................................................................................... Line 148

#include <stdio.h>
#include <string.h>

// ===============================================================================================================================================================================================

// functions, arguments, parameters and return statements:
// square is the function that returns a double value. Hence double keyword is used.
// int num inside of the () is the parameter that needs to be passed while calling the function
// return s returns the double value ie the squared value of the provided integer back to the function call

/*
double square(int num) {

    double s = num * num;
    return s;

}

// square function is called and stored as a double datatype.
// num is passed as the argument inside of ()
// the returned value is then printed using printf statement.

int main() {
    int num = 5;
    double x = square(num);
    printf("The square of the number %d is %lf\n", num, x);

    return 0;
}

// ===============================================================================================================================================================================================

// prototyping a function:
// It is basically declaring the function without a body with required number of arguments
// Many C compilers do not check for parameters matching and ends up compiling the code even if right number of arguments are not passed
// Prototyping ensures that all the arguments are passed and prevents compilation of the code to avoid unexpected behaviour

void show(char[], int); // prototyping the function

int main(){
    char YourName[] = "Bro";
    int age = 21;

    show(YourName, age);

    return 0;
}

void show(char YourName[], int age) {

    printf("Your name is %s and your age is %d", YourName, age);

}

// ===============================================================================================================================================================================================

// structs: 
// collection of related members ("variables")
// they can be of different data types
// listed under one name in a block of memory
// very similar to classes in oop languages (but no methods)

struct Player {
    char name[15];
    int score;

};

int main() {
    // creating instances of declared struct variable. (datatype: struct name-> Player)
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "hello"); // setting the value of player1's name
    player1.score = 20; // setting the value of player1's score

    strcpy(player2.name, "bro"); // setting the value of player2's name
    player2.score = 25; // setting the value of player2's score

    // accessing their values
    printf("Player1 name: %s, player1 score: %d\n", player1.name, player1.score);
    printf("Player2 name: %s, player2 score: %d\n", player2.name, player2.score);

    return 0;
}

// ===============================================================================================================================================================================================

// typedef: 
// This is used to give a nickname for the datatypes

typedef char user[25]; // instead of char user1[25] each time, just user can be used to initialize char strings

int main() {
    user user1 = "Hello";
    user user2 = "bro";

    printf("%s %s", user1, user2);

    return 0;

}

// ===============================================================================================================================================================================================

// typedef with structs:

typedef struct {
    char name[15];
    int score;

} Users; // nickname for the struct

int main() {
    Users user1 = {"Bro", 25}; // passing the values as an array
    Users user2 = {"Hello", 20}; // passing the values as an array

    printf("%s\n", user1.name);
    printf("%d\n", user1.score);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%d\n\n", user2.score);

    // to create an array of struct with user1 and user2 as elements:

    Users users[] = {user1, user2};

    // use for loop to iterate thru

    for (int i = 0; i < sizeof(users)/ sizeof(users[0]); i++) {
        printf("%-12s", users[i].name);
        printf("%d\n", users[i].score);
    }

    return 0;
}

// ===============================================================================================================================================================================================

// #define: 
// It is used to define a constant globally. const can also be used to define a constant locally but #define global only

#define PI 3.1415

int main() {

    printf("%f", PI);
    return 0;
}

*/

// ============================================================== THANK YOU ========================================================================================================================
