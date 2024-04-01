#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *create(int n);
void print (node*);
int count(node*);
void main()
{
    node *head;
    int n,number;
    printf("\n enter no. of items\n");
    scanf("%d",&n);
    head =create(n);
    print(head);
    number=count(head);
    printf("\n no. of nodes:%d",number);
}
node *create(int n)
{
    node *head,*p;
    int i;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    scanf("%d",&(head->data));
    p=head;
    //create subsequent node
    for(i=1;i<n;i++)
    {
        p->next=(node*)malloc(sizeof(node));
    //new node is inserted as the next node after p
    p=p->next;
    scanf("%d",&(p->data));
    p->next=NULL;
    }
return (head);
}
void print(node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",(p->data));
        p=p->next;
    }
}
int count(node *p)
{
    int c=0;
    while(p!=NULL)
    {
        p=p->next;
        c++;
    }
    return c;
}