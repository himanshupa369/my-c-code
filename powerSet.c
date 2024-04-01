#include<stdio.h>
#include<math.h>
void printPowerSet(char *set,int setsize);
int main()
{
    int size,i;
    char set[100];
    printf("size of set\n");
    scanf("%d",&size);
    printf("enter character in set\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",&set[i]);

    }
    printf("power set:");
    printPowerSet(set,size);
}
void printPowerSet(char *set,int size)
{
    unsigned int powersetsize=pow(2,size);
    int counter,j,k=1;
    printf("number of power set is %d\n",powersetsize);
    for(counter=0;counter<powersetsize;counter++)
    {
        printf("%d",k);
        for(j=0;j<powersetsize;j++)
        {
            if(counter & (1<<j))
            printf("%c",set[j]);
        }
        k++;
        printf("\n");
    }
}