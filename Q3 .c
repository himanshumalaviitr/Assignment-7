/*Write a program to check whether a given number is there in the Fibonacci
series or not.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f1=0,f2=1;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    while(f1<n)
    {
        f2=f2+f1;
        f1=f2-f1;
    }
    if(f1==n)
        printf("%d is term of fibonnaci series",n);
    else
        printf("%d is not term of fibonnaci series",n);
    getch();
    return 0;
}
