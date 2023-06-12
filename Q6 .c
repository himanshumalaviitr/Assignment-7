//Write a program to print all Prime numbers under 100

#include<stdio.h>
#include<conio.h>
int main()
{
    int n=2,i;
    while(n<=100)
    {
       for(i=2;n%i;i++);
       if(i==n)
        printf("%d ",n);
        n++;
    }
    getch();
    return 0;
}
