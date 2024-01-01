#include <stdio.h>

// Variables
/*
=> To Allocate space in memory to store a value
=> We refers to a variable's name to access the stored value
=> That variable's now behaves as if  it eas the value it contains
=> But we need to declare what type of data we are storing.
*/

int main() {
    int x ; // declaration
    x = 5 ; // initialization
    int y = 123 ; // declaration + initialization

    int age = 21 ; // integer
    float gpa = 2.05 ; // floating point number
    char grade = 'C' ; // single character
    char name[] = "Bro"; //array of characters

    printf("You are %d years old\n",age);
    printf("Your gpa is %f \n",gpa);
    printf("Your Average grade is %c \n",grade);
    printf("Hello %s \n",name);

    return 0;
}