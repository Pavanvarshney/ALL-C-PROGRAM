#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in farenheit=");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in celsius= %f",c);
    return 0;
}