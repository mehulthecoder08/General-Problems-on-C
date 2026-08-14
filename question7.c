// to check the greater number in the two given numbers//
#include <stdio.h>
int main(){
    int a,b;
    printf("User Enter the value of a: ");
    scanf("%d", &a);
    printf("User Enter the value of b: ");
    scanf("%d", &b);
    
    if (a>b){
        printf("a = %d is greater than b = %d", a,b);
    }

    else {
        printf("b = %d is greater than a = %d", b,a);
    
    }
    return 0;
}