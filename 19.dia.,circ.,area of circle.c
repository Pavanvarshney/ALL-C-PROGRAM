#include<stdio.h>
int main()
{
    int r,d;
    float a,c;
    printf("\nEnter the value of r");
    scanf("%d",&r);
    d=2*r;
    printf("\ndiameter=%d",d);
    
    c=2*3.14*r;
    printf("\ncircumference=%f",c);

    a=3.14*r*r;
    printf("\narea=%f",a);
    return 0;
}