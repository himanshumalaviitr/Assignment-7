//Write a program to calculate HCF of two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,r;
    printf("Enter any two no.:- ");
    scanf("%d%d",&a,&b);
    while(a%b)
    {
        r=a%b;
        a=b; b=r;
    }
    printf("GCD= %d",r);
    getch();
    return 0;
}
