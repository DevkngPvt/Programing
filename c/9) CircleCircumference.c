// 9) Circle circumference

#include <stdio.h>

int main() {

    const double PI = 3.14159 ;
    double radius ;
    double circumference ;
    double area ;

    printf("\nEnter the radios of a circle");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius ;
    area = PI * radius * radius ;


    printf("\nCircumference: %lf\n", circumference);
    

    return 0 ;
}