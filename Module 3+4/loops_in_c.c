#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("Enter the numbers of iterations you want to do\n");
    
    scanf("%d",&n);
    //-------------------------------------------------------------------------------
    for(i=0;i<n;i++)
    {
        printf("Interation using for loop %d\n",i+1); 
    }
    //-------------------------------------------------------------------------------
    i=0;
    printf("\n");
    while(i<n)
    {

        printf("Interation using while loop %d\n",i+1);
        i++;
        
    }
    //-------------------------------------------------------------------------------
    i=0;
    printf("\n");
    do
    {
        printf("Interation using do while loop %d\n",i+1);//prints the value even before the checking the condition
        i++;
    }
    while(i<n);
    //-------------------------------------------------------------------------------
    return 0;
}