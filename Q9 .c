/*Write a program to check whether a given number is an Armstrong number
or not*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,m,i,s=0;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    m=n;
    for(i=0;n;n=n/10)
        i++;
    n=m;
    while(n)
    {
       s=s+pow(n%10,i);
       n=n/10;
    }
    if(s==m)
        printf("no. is armstrong no.\n");
    else
        printf("no. is not armstrong no.\n");
}
