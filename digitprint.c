#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,x;
    double s,f;
    printf("enter number of terms n\n");
    scanf("%d",&n);
    printf("enter the value of x\n");
    scanf("%d",&x);
    s=1;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
            s=s+pow(-x,i)/f;
    }
printf("sum of sseries =%.2f",s);
 return 0;
}
