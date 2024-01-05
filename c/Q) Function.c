#include<stdio.h>

//Function
void birthday(){  
    printf("Happy Birthday..\n");
}

// Aruguments
void birthdayname (char name[] , int age){
     printf("Happy Birthday..%s\n",name);
     printf("Your age is..%d\n",age);
}

// Return Function
double square(double x){
    double result = x * x ;
    return result ;
}


int main() {

    int age = 21 ;
    char name[] = "DineshKumar" ;
    


    // Function Using
    birthday();
    // Arugmuents Using
    birthdayname(name , age);
    // Return 
    double x = square(10);
    printf("\nresult of square is %lf\n",x);
    

    return 0 ;
}

