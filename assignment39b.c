#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%c",'A'-1+i);
        }
    printf("\n");
}
    return 0;
}