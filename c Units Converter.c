//Write a Program for converting distance in mm to cm, inch and feet//
#include <stdio.h>
int main(){
    int mm, cm, inch;
    float feet;
    printf("User Enter the Distance in mm: ");
    scanf("%d", &mm);
    cm = (mm/10);
    inch = (mm/25);
    feet = (mm/300.00);
    printf(" The value of %d mm : %d cm, %d inch and %f feet", mm, cm, inch, feet);
    return 0;

}
