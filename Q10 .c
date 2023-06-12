//Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n=0,m,i,s;
    for(   ;n<1000; n++)
    {
        m=n;
        for(i=0;n;n=n/10)
            i++;
        n=m;
        s=0;
        while(n)
        {
            s=s+pow(n%10,i);
            n=n/10;
        }
        if(s==m)
          printf("%d ",m);
        n=m;
    }
    getch();
    return 0;
}
