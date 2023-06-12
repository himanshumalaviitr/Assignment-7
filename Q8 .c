//Write a program to find next Prime number of a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter any no. :- ");
    scanf("%d",&n);
    do
    {
        n++;
        for(i=2;n%i;i++);
        if(i==n)
            break;
    }while(1);
    printf("Next prime no. is %d",n);
    getch();
    return 0;
}


/*
"second method"

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    printf("enter any no:-");
    scanf("%d",&n);
    while(n!=i)
    {
        n++;
        for(i=2;n%i;i++);
    }
    printf("next prim =%d ",n);
  getch();
  return 0;
}



*/
