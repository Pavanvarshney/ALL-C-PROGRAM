#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter the first angle of triangle x=");
    scanf("%f",&x);
    printf("Enter the second angle of triangle y=");
    scanf("%f",&y);
    z=180-(x+y);
    printf("third angle of triangle z=%f\n",z);
    return 0;
}
