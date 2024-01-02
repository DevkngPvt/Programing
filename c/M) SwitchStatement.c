// 12) Switch Statement

#include<stdio.h>

int main() {
    // Switch = A more Efivent alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade ;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){

        case 'A':
           printf("perfect\n");
           break;

        case 'B':
           printf("You Did Good.!\n");
           break;

        case 'C':
           printf("You Did Okey..\n");
           break;
           
        case 'D':
           printf("At least it's not an F \n");
           break;   

        case 'F':
           printf("You Failed\n");
           break;

        default :
           printf("No matiching \n "); 
    }

     return 0 ;
}