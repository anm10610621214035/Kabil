#include<stdio.h>
#include<conio.h>
int main ()
{
    int first=0, second=1,third,i,n;
    clrscr();
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the Fibonacci series is:\n");
    printf("\t %d \t %d",first,second);
    for(i=2; i<=n; i++)
    {
        third=first+second;
        printf("\t %d",third);
        first=second;
        second=third;
    }
    return 0;
}