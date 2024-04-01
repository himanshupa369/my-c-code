#include<stdio.h>
int main()
{
int a[100],b[100],c[100],n1,n2,n3,i,j,k,p=0,t=0;
printf("enter the size of array a and b\n");
scanf("%d%d",&n1,&n2);
printf("enter arry a elements\n");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter array b elements\n");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<n1;i++)
    c[i]=a[i];
    for(j=0;j<n2;j++)
    {
        k=0;
        while(k<n1)
        {
        if(b[j]==a[k])
            p=1;
            k++;
        }
        if(p==0)
        {
            c[i]=b[j];
            i++;
            t++;
        }
        p=0;
    }
    n3=n1+t;
    printf("union of set A and set B is::\n");
    for(j=0;j<n3;j++)
    printf("%d ",c[j]);
    return 0;
}
