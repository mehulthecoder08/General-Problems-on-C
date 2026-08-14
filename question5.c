//to check whether the given number is less than 10 or not//
#include <stdio.h>

int main(){

    int a;

    printf("Enter the value of a: ");

    scanf("%d", &a);

    if (a<10){

        printf("a = %d is less then 10", a);

    }


    
    else {
    
        printf("a = %d is greater than 10", a);
    
    }
}