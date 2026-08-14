//divide two number//
#include <stdio.h>
int main(){
    int a, b, c;
    printf("User enter the value of a\n");
    scanf("%d", &a);
    printf("User enter the value of b\n");
    scanf("%d", &b);
    c = a/b;
    printf("The division of a = %d and b = %d is %d\n", a,b,c);
    return 0;
}