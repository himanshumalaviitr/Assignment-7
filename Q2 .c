//Write a program to print first N terms of Fibonacci series

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f1=0,f2=1;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",f1);
        f2=f2+f1;
        f1=f2-f1;
        n--;
    }
    getch();
    return 0;
}
