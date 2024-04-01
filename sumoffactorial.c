#include<stdio.h>
int main()
{
int n,i,f=1,s=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    f=f*i;
    s=s+f;
}
printf("\n sum=%d",s);
return 0;

}