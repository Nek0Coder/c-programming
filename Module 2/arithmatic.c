#include<stdio.h>
int main()
{
    int a=10,b=25;
    int sum=a+b;
    int sub=b-a;
    int mult=b*a;
    int mod=b%a;
    float div=(float)b/a;//typecasted from integer to float
    printf("Summation= %d Subtraction= %d Multiplication= %d Division= %.2f Remainde= %d",sum,sub,mult,div,mod);
}