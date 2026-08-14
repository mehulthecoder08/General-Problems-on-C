//to swap two numbers//
#include <stdio.h>
int main(){
    int a, b, temp;
    printf("User enter the value of a");
    scanf("%d",&a);
    printf("\nUser enter the value of b");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("The swaped values are %d and %d", a,b);
    return 0;
}
