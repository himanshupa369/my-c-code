#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c,a;
    printf("enter height of pattern\n");
    scanf("%d",&n);
    for(r=n;r>=1;r--)
    {
        for(c=r;c>=1;c--)
        {
            printf("%d\t",c);
        }
        printf("\n");
    }
    for(r=1;r<=n;r++)
    {
        for(a=1;a<=r;a++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}