#include<stdio.h>
int main()
{
    float a,b,c,d,e,T,A,P;
    printf("Enter the marks of a,b,c,d and e:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    T=a+b+c+d+e;
    printf("Total marks=%f\n",T);
    A=T/5;
    printf("Average marks=%f\n",A);
    P=((a+b+c+d+e)/500)*100;
    printf("Percentage= %f\n",P);
    return 0;
}