#include<stdio.h>
int ar(int l,int b)
{
    int ar;
    ar=l*b;
    return ar;
}
int main()
{
    int l,b,A;
    printf("enter the length and bridth of rectangle\n");
    scanf("%d%d",&l,&b);
    A=ar(l,b);
    printf("area of rectangle=%d",A);
return 0;
}
