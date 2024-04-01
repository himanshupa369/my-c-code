#include<stdio.h>
int main()
{
    int a,b;
    void swap(int,int);
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping number is a=%d \t b=%d\n",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping number is a=%d \t b=%d \n",a,b);
}