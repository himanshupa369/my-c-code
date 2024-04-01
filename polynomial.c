# include<stdio.h>
# include<stdlib.h>
struct node
{
    int coff;
    int power;
    struct node *link;

};struct node *first1,*first2,*first;
void create1();
void create2();
void traverse1();
void traverse2();
void add();
int main()
{
    create1();
    create2();
    traverse1();
    traverse2();
return 0;    
}
void create1()
{
  struct node *ptr,*cpt;
  int choice;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("Enter the cofficient and Power of ptr");
  scanf("%d %d",&ptr->coff,&ptr->power);
  first1=ptr;
  do
  {
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("Enter the coffieciemnt and power of cpt");
    scanf("%d %d ",&ptr->coff,&ptr->power);
    ptr->link=cpt;
    ptr=cpt;
    printf("Enter 1 for more node and 0 for stop");
    scanf("%d",&choice);
}while(choice==1);
ptr->link=NULL;
}
void create2()
{
  struct node *ptr,*cpt;
  int choice;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("Enter the cofficient and Power of ptr");
  scanf("%d %d",&ptr->coff,&ptr->power);
  first2=ptr;
  do
  {
    cpt=(struct node*)malloc(sizeof(struct node));
    printf("Enter the coffieciemnt and power of cpt");
    scanf("%d %d ",&ptr->coff,&ptr->power);
    ptr->link=cpt;
    ptr=cpt;
    printf("Enter 1 for more node and 0 for stop");
    scanf("%d",&choice);
}while(choice==1);
ptr->link=NULL;

}
void add()
{
    struct node *temp1,*temp2,*ptr,*cpt;
    temp1=first1;
    temp2=first2;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(temp1->power>temp2->power)
    {
        ptr->coff=temp1->coff;
        ptr->power=temp1->power;
        temp1=temp1->link;
    }
    else if(temp1->power<temp2->power)
    {
        ptr->coff=temp2->coff;
        ptr->power=temp2->power;
        temp2=temp2->link;
    }
    else 
    {
        ptr->coff=temp1->coff+temp2->coff;
        ptr->power=temp1->power;
        temp1=temp1->link;
        temp2=temp2->link;
    } 
    while(temp1!=NULL && temp2!=NULL)
    {
        cpt=(struct node*)malloc(sizeof(struct node));
        if(temp1->power>temp2->power)
        {
            cpt->coff=temp1->coff;
            cpt->power=temp1->power;
            temp1=temp1->link;
        }
        else if (temp1->power<temp2->power)
        {
            cpt->coff=temp2->coff;
            cpt->power=temp2->power;
            temp2=temp2->link;
        }
        else 
        {
            cpt->coff=temp1->coff+temp2->coff;
            cpt->power=temp1->power;
            temp1=temp1->link;
            temp2=temp2->link;
        }
        ptr->link=cpt;
        ptr=cpt;
    } 
        while(temp1!=NULL)
        {
            struct node*cpt;
            cpt=(struct node*)malloc(sizeof(struct node));
            cpt->coff=temp1->coff;
            cpt->power=temp1->power;
            temp1=temp1->link;
        }
        while(temp2!=NULL)
        {
            struct node*cpt;
            cpt=(struct node*)malloc(sizeof(struct node));
            cpt->coff=temp2->coff;
            cpt->power=temp2->power;
            temp2=temp2->link;
        }
        ptr->link=cpt;
        ptr=cpt;

}
void traverse()
{
    struct node *z;
    
    
}