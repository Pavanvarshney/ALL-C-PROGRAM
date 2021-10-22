#include<stdio.h>
int main()
{
    int a,b,c,d;

    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(double);
    d=sizeof(char);

    printf("\nsize of(int)=%d bytes",a);
    printf("\nsize of(float)=%d bytes",b);
    printf("\nsize of(double)=%d bytes",c);
    printf("\nsize of(char)=%d bytes",d);

    return 0;
}