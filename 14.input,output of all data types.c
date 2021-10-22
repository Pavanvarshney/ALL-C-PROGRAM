#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("Enter value of int=");
    scanf("%d",&a);
    printf("Enter the value of char=");
    scanf("%c",&b);
    printf("Enter the value of float=");
    scanf("%f",&c);
    printf("Enter the value of double=");
    scanf("%lf",&d);
         

    printf("int a=%d\n",a);
    printf("char b=%c\n",b);
    printf("float c=%f\n",c);
    printf("double d=%lf\n",d);
    return 0;
}
