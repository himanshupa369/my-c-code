#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,n1,d,i,s=0;
    printf("enter the number\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        n=n%10;
        c++;
    }
    for(i=0;i<=n;i++)
    {
        d=d%10;
        s=s+pow(c,d);
        n=n/10;
    }
    if(n=s)
    {
        printf("the given number is armstrong number\n");
    }
    else
    {
     printf("not a armstrong number\n");
    }
    return 0;

}
