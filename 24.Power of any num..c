#include<stdio.h>
#include<math.h>
int main()
{
    float p,x,y;
    printf("Enter the value of x\n");
    scanf("%f",&x);
    printf("Enter the value of y\n");
    scanf("%f",&y);
    p=pow(x,y);
    printf("value of power(x^y)=%f\n",p);
    return 0;
}