//product 0f two numbers//
#include<stdio.h>
int prod(int a,int b);
int main()
{
    int x,y,z;
    printf("enter two numbers/n");
    scanf("%d%d",&x,&y);
    z=prod(x,y);
    printf("product=%d",z);
}
int prod(int a,int b)
{
    int c;
    c=a*b;
    return c;
}