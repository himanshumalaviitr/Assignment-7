/*Write a program to check whether two given numbers are co-prime
numbers or not*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,r;
    printf("Enter any two no. :- ");
    scanf("%d%d",&a,&b);
    while(a%b)
    {
        r=a%b;
        a=b; b=r;
    }
    if(r==1)
        printf("no. are coprime ");
    else
        printf("no. are not coprime ");
    getch();
    return 0;
}
