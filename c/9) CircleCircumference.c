// 9) Circle circumference

#include <stdio.h>

int main() {

    const double PI = 3.14159 ;
    double radius ;
    double circumference ;
    double area ;

    printf("\nEnter the radios of a circle : ");
    scanf("%lf", &radius);


    // Formula Formate
    circumference = 2 * PI * radius ;   // Formula circumferance = 2πR²
    area = PI * radius * radius ;       // Formula area = πR²

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf\n", area);
    

    return 0 ;
}