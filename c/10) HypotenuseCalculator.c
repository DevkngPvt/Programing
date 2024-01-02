// 10) Hypotenuse Calculator
#include <stdio.h>

int main() {

    double A ;
    double B ;
    double C ;

    printf("Enter side A : ");
    scanf("%lf" , &A);

    printf("Enter side B : ");
    scanf("%lf" , &B);


    //Formula 
    C = sqrt(A*A + B*B);  

    printf("Ans => %lf\n", C);

    return 0 ;
}