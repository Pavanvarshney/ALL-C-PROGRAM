#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celsius=");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temperature in farenheit=%f",f);
    return 0;
}