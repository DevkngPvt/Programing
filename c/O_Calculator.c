// 14) Calculator

#include<stdio.h>

void main(){
    char operator ;
    double num1 , num2 ,result ;

    printf("\n-------------------------- ");
    printf("\n  Welcome to Calculator ");
    printf("\n--------------------------\n");

    printf("\nEnter an operator (+ - * / ) : ");
    scanf("%c", &operator);
    printf("\n                               \n");
    printf("Enter Num1 : ");
    scanf("%lf", &num1);
    printf("Enter num2 :");
    scanf("%lf", &num2);

   switch(operator) {
       case '+' :
       result = num1 + num2 ;
       printf("Result is : %0.2lf \n" , result);
       break ;

       case '-' :
       result = num1 - num2 ;
       printf("Result is : %0.2lf \n" , result);
       break ;

       case '*' :
       result = num1 * num2 ;
       printf("Result is : %0.2lf \n" , result);
       break ;

       case '/' :
       result = num1 / num2 ;
       printf("Result is : %0.2lf \n" , result);
       break ;

       default:
       printf("Not Valid");
    
   }

}