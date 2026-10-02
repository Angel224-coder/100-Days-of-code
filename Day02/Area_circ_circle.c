//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{
    int r;
    float Area=0,Circumference=0;
    printf("Enter radius: ");
    scanf("%d",&r);
    Area=3.14*r*r;
    Circumference=2*3.14*r;
    printf("Area= %.2f, Circumference= %.2f",Area,Circumference);
    return 0;
}
