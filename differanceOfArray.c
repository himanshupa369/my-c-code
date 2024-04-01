#include<stdio.h>
int main()
{
int a[100],b[100],c[100],n1,n2,n3,i,j,k,count;
printf("enter the size of array a and b\n");
scanf("%d%d",&n1,&n2);
printf("enter arry a elements\n");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter array b elements\n");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
k=0;
for(i=0;i<n1;i++)
{
    count=1;
    for(j=0;j<n2;j++)
    {
        if(a[i]==b[j])
        {
          count=0;
          break;
        }
    }
    if(count==1)
    {
        c[k]=a[i];
        k++;
    }
}
n3=k;
printf("differance of two arrays\n");
for(k=0;k<n3;k++)
printf("%d\t",c[k]);
return 0;
}