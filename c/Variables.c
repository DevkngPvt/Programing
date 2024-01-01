#include <stdio.h>

// Varibles 
/*
=> To Allocate space in memory to store a value
=> We refers to a varible's name to acess the stored value
=> That varibles now behaves as if  it eas the value it contains 
=> But we need to declare what type of data we are storing.
*/

int main() {
    int x ; // declaration
    x = 5 ; // initization
    int y = 123 ; // declaration + initization

    int age = 21 ; // integer
    float gpa = 2.05 ; // floating point number
    char grade = 'C' ; // single charater
    char name[] = "Bro"; //array of charaters

    printf("You are %d years old\n",age);
    printf("Your gpa is %f \n",gpa);
    printf("Your Average grade is %c \n",grade);
    printf("Hello %s \n",name);

    return 0;
}