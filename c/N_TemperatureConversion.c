// 13 Temperature Conversion

#include<stdio.h>
#include<ctype.h> // need this import

int main() {

    char unit ;
    float temp ;


    printf("\nIs the temperature in (F) or (C) ?");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\n Enter The temperature Celsius : ");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32 ;  // Formula 
        printf("\nThe temperature in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        printf("\n Enter The temperature Farnheit : ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5 ) / 9;
        printf("\nThe temperature in Celsius is: %.2f\n", temp);
    }
    else{
        printf("\n %c Not a valid unit of measurement \n");
    }


    return 0 ;

}