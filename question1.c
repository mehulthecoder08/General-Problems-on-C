// write a program to convert the time in seconds to time in hoursn minutes and seconds//
#include <stdio.h>
int main(){
    int s, m, h, t, a;
    printf("User unter the value of of Time in Seconds :  ");
    scanf("%d", &s);
    h = s/3600;
    m = s%3600;
    t = m/60;
    a = m%60;
    printf(" The %d seconds is equal to %d hours, %d minutes and %d seconds.", s, h, t, a);
    return 0;
}