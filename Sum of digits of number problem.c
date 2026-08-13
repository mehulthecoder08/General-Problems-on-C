//write a program to find the sum of the digits of a four-digit number(ex. 1234 sum = 10) without using a loop//
#include <stdio.h>
int main(){
    int s,a,b,c,d,e,f,g;
    printf("User enter the number he wished to take sum of digit:  ");
    scanf("%d", &s);
    a = s/1000;       
    b = s%1000/100;   
    c = (s%1000)%100;     
    d = ((s%1000)%100)/10;
    e = ((s%1000)%100)%10;
    g = (((s%1000)%100)%10)/1;
    e = a+b+d+g;
    printf("The answer is %d", e);
    return 0;
}
