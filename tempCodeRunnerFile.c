#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c;
    printf("enter height of pattern\n");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for (c=1;c<=n;c)
        {
            printf("%d_\t",c);
        }
        printf("\n");
    }
    return 0;
}