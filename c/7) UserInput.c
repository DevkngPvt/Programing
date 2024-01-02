// 7) User Input 

#include<stdio.h>

int main() {

    char name[25] ;
    int age = 0 ;

    printf("\n What's Your Name ?");

    // It accepts only characters  => scanf("formatSpecifier", &key);
    // scanf("%s" , &name ); 

    // It can accept empty spaces also => fgets(key, size , stdin);
    fgets(name , 25 , stdin);    

    printf("\n How old are you ?");
    scanf("%d" , &age);

    printf("\n--------------------WELCOME-------------------\n"); 
    printf("\nHi %s \n", name);
    printf("You are %d years old \n", age);


    return 0 ;
    
}
