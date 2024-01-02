// 11) If Statements
 # include<stdio.h>

 int main() {

    int age ;

    printf("\nEnter Your Age : ");
    scanf("%d",&age);

    if(age >= 18){
        printf("Your are Signed In !\n");
    }
    else if (age == 0){
        printf("Unable To Sigin \n");
    }
    else if (age < 0){
        printf("Worng Details !\n");
    }
    else {
        printf("Your are too young to Signed In !\n");
    }

    return 0 ;
 }