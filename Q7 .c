/*Write a program to print all Prime numbers between two given numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("Enter any two no. :-");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        b=a+b;
        a=b-a;
        b=b-a;
    }
    while(a<b)
    {
        for(i=2;a%i;i++);
        if(i==a)
            printf("%d ",a);
        a++;
    }
    getch();
    return 0;
}
