#include<stdio.h>
int removerepeater(int n3,int c[]);
void sort(int n3,int c[]);
int main()
{
int a[100],b[100],c[100],n1,n2,n3,i,k,j;
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
    for(j=0;j<n2;j++)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
        }
    }
}
sort(k,c);
n3=removerepeater(k,c);
printf("set after intersection\n");
if(n3>0)
{
    for(i=0;i<n3;i++)
    printf("%d ",c[i]);
}
else
{
    printf("intersection not possible\n");
}
}
void sort(int n3,int c[])
{
    int i,j,temp=0;
    for(i=0;i<n3;i++)
    {
    for(j=i+1;j<n3;j++)
      {
        if(c[i]>c[j])
        {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        }
      }
    }
}
int removerepeater(int n3,int c[])
{
    int i,j,k;
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]==c[j])
            {
                for(k=j;k<n3;k++)
                {
                    c[k]=c[k+1];
                }
                n3--;
            }
            else
            {
                j++;
            }
        }
    }
    return n3;
}
