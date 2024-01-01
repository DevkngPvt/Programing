// 2) Variables
#include <stdio.h>

// Variables
/*
=> To Allocate space in memory to store a value
=> We refers to a variable's name to access the stored value
=> That variable's now behaves as if  it eas the value it contains
=> But we need to declare what type of data we are storing.
*/

int main() {
    int x ;       // declaration
    x = 5 ;       // initialization
    int y = 123 ; // declaration + initialization

    int age = 21 ;       // integer
    float gpa = 2.05 ;   // floating point number
    char grade = 'C' ;   // single character
    char name[] = "Bro"; //array of characters


    float  f = 3.1234567;          // float has 0.0000000 value max
    double d = 3.1234567890123456 ; // double has 0.0000000000000000 value max

     //bool e = true ; // Boolien
    

    printf("You are %d years old\n",age);        //  %d  => To print Integers
    printf("Your gpa is %f \n",gpa);             //  %f  => To print Float
    printf("Double %lf \n",d);                    //  %lf => To print Double
    printf("Your Average grade is %c \n",grade); //  %c  => To print Char
    printf("Hello %s \n",name);                  //  %s  => To print char[] array
    // printf("Hello %d \n",b);                     //  %d  => To print bool
    

    return 0;
}