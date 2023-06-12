//Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,f1=0,f2=1;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    while(i<n)
    {
        f2=f2+f1;
        f1=f2-f1;
        i++;
    }
    printf("%d term of fibonnaci series is %d",n,f1);
    getch();
    return 0;
}
