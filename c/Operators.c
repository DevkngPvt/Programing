// 6) Operators
#include<stdio.h>

int main() {

    // 1) Arithmethic operators
    // 2) Augrmented assignment operators


    //   Arithmethic operators
    //  ------------------------

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (devision)
    // % (modulus)
    // ++ Increment
    // -- Decrement

    int x = 5 ;
    int y = 2 ;

    // add
    int a = x + y ;
    printf("Addition result %d\n",a);

    // sub 
    int s = x - y ;
    printf("Subtraction result %d\n",s);

    // multiple
    int m = x * y ;
    printf("Multiplication result %d\n",m);

    // divide
    float d = x / (float) y ;
    printf("Devision result %f\n",d);

    // mod
    int mod = x % y ;
    printf("Modulus result %d\n",mod);    

    // increment
    x++ ;
    printf("Increment result %d\n",x);

    // decrement 
    y-- ;
    printf("Decrement result %d\n",y);


    //  Augrmented assignment operators
    // ----------------------------------

    // Augremented assignment operators = Used To replace a statement where an operator
    //                                    takes a varrible as one of its arugments 
    //                                    and then assigns the result back to the same varible
    //                                    x = x + 1
    //                                    x+ = 1

    // int x = 100 (Note That x value is already has been declared at Top ^ )

    printf("Augrmented assignment operators results starts \n");
    printf("----------------------------------------------- \n");

    x = x + 2 ; // Increment x = x + 2 (or) x+=2
    //x+=2100;
    printf("AAS Operators Result %d \n ", x);




    return 0 ;
}