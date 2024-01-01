// 6) Operators
#include<stdio.h>

int main() {

    // Arithmethic operators

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
    printf(" Modulus result %d\n",mod);    

    // increment
    x++ ;
    printf("Increment result %d\n",x);

    // decrement 
    y-- ;
    printf("Decrement result %d\n",y);



    return 0 ;
}