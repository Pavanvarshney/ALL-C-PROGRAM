#include<stdio.h>
int main()
{
    float A,b,h;
    printf("Enter the value of base=");
    scanf("%f",&b);
    printf("Enter the value of height=");
    scanf("%f",&h);
    A=(b*h)/2;
    printf("Area of triangle=%f",A);
    return 0;
}