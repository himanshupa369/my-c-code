#include<stdio.h>
int main(){
    int a[]={2,10,20,15,23,70,4,9,50,21};
    int n=10;
    for(int i=n/2;i>=1;i=i/2)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=j-i;k>=0;k=k-i)
            {
                if(a[i+k]>a[k])
                break;
                else
                {
                    int temp=a[i+k];
                    a[i+k]=a[k];
                    a[k]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}