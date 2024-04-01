#include<stdio.h>
#include<math.h>
int main()
{
    int ar[100],n,i,j,temp=0;
    printf("enter the size of an array n\n");
    scanf("%d",&n);
    printf("enter array element\n");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(ar[i]>ar[j])
        {
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        }
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    printf("%d\t",ar[i]);

return 0;
}