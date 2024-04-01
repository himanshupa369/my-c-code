# include<stdio.h>
# include<stdlib.h>
void traverse();
void create ();
void insertatbeg();
void insertatend();
void insertatany();
void deletionatbeg();
void deletionatend();
void deletionatany();
struct node
{
    int info;
    struct node*link;
};struct node*first;

int main()
{
  create();
  traverse();
  insertatbeg();
  traverse();
  insertatend();
  traverse();
  insertatany();
  traverse();
  deletionatbeg();
  traverse();
  deletionatend();
  traverse();
  deletionatany();
  traverse();

  return 0;
}
void create()

{
    struct node *x, *y;
    char ch;
    x=(struct node *)malloc(sizeof(struct node));
    printf("Enter info of x\n");
    scanf("%d",& x->info);
    
    first=x;
    do{
        y=(struct node*)malloc(sizeof(struct node));
        printf("Enter info of y\n");
        scanf("%d",&y->info);
        x->link=y;
        x=y;
        printf(" Do you want to create more linked list?\n if Yes Press Y\n else No for N\n");
        scanf("%s",&ch);
        }
        while(ch=='Y'||ch=='y');
        x->link =NULL;
}
//function to traverse linked list
void traverse()
{
    struct node*z;
    z=first;
    printf(" Now the linked list is..\n");
    while(z!=NULL)
    {
      printf("%d\t",z->info);
      z=z->link;
    }
    printf("\n");

}
// function to enter the element at beginnig.
void insertatbeg()
{
    struct node*x;
    x=(struct node*)malloc(sizeof(struct node));
    printf("Element to be inserted in beginning : ");
    scanf("%d",&x->info);
    x->link=first;
    first=x;
} 
//function to enter the element in node at end
 void insertatend()
{x  struct node*c,*x;
  c =(struct node*)malloc(sizeof(struct node));
  x=first;
  printf("Enter element to be inserted at end: ");
  scanf("%d",&c->info);
  while(x->link!=NULL)
  {
    x=x->link;
  }
  x->link=c;
  c->link=NULL;
}
//functioin def for insert after the given info
void insertatany()
{
  struct node *d,*x,*y;
  int data;
  d=(struct node*)malloc(sizeof(struct node));

  printf("Enter the info after which you want to insert : ");
  scanf("%d",&data);
  printf("enter the element to be inserted : ");
  scanf("%d",&d->info);
  
  x=first;
  while(x->info!=data)
  {
    x=x->link;
  }
  y=x->link;
  x->link=d;
  d->link=y;
}
//function for deletion of array at beginnig
void deletionatbeg()
{
  struct node*x;
x=first;
  first=x->link;
  free(x);
}
// for deletion of linked list from end
void deletionatend()
{
  struct node*x,*y;

  y=first;
  while(y->link!=NULL)
  {
   x=y;
   y=y->link;
   //x->link=y;
}
x->link=NULL; 
free(y);
}
//function for deletion from any from linked lsit
void deletionatany()
{
  struct node *x,*y;
  int data;
  x=first;
  printf("Enter the data after which you want to delete the node");
  scanf("%d",&data);
  while(x->info!=data)
  {
    x=x->link;
  }
  

}