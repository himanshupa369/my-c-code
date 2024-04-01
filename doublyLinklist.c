# include<stdio.h>
# include<stdlib.h>
struct node
{
    int info;
    struct node *lpt,*rpt;

};struct node *first;
void create();
void traverse_forward();
void traverse_backward();
void insert_at_beg();
void insert_at_end();
void insert_at_any();
void deletion_at_beg();
void deletion_at_end();
void deletion_at_any();
int main()
{
    create();
    printf("Forward traversing...\n");
    traverse_forward();

    printf("Backward traversing...\n");
    traverse_backward();

    insert_at_beg();
    printf("After insertion at begining...\n");
    traverse_forward();

    insert_at_end();
    printf("After insertion at end...\n");
    traverse_forward();

    insert_at_any();
    printf("after inserting at desired location...\n");
    traverse_forward();

    deletion_at_beg();
    printf("After deletion from begining...\n");
    traverse_forward();

    deletion_at_end();
    printf("After deletion from end...\n");
    traverse_forward();
    deletion_at_any();
    printf("After deletion after given data...\n");
    traverse_forward();
    
    return 0;
}
//creating doubly linked list
void create()
{
    struct node *x, *y;
    char ch;
    x=(struct node *)malloc(sizeof(struct node));
    printf("Enter info of x: ");
    scanf("%d",& x->info);
    x->lpt=NULL;
    first=x;
    do{
        y=(struct node*)malloc(sizeof(struct node));
        printf("Enter info of y: ");
        scanf("%d",&y->info);
        x->rpt=y;
        y->lpt=x;
        x=y;
        printf(" Do you want to create more linked list?\n if Yes Press Y\n else No for N\n");
        scanf("%s",&ch);
        }while(ch=='Y'||ch=='y');
        x->rpt=NULL;
        

}
// forward traversing
void traverse_forward()
{

    struct node*x;
    x=first;
    while(x != NULL)
 {
    printf("%d\t",x->info);
    x=x->rpt;
 }
 printf("\n");
}
// backward traversing
void traverse_backward()
{
   
    struct node *x;
    x=first;
    while(x->rpt!=NULL)
    {
        x=x->rpt;
    }
    while(x!=NULL)
    {
        printf("%d\t",x->info);
        x=x->lpt;
    }

}
//function for insert at beg
void insert_at_beg()
{
    struct node *x;
    x=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter info  to be inserted: ");
    scanf("%d",&x->info);
    x->lpt=NULL;
    x->rpt=first;
    first->lpt=x;
    first=x;
}
// function to insert at end
void insert_at_end()
{
    struct node*z,*y;
    y=first;
    z=(struct node*)malloc(sizeof(struct node));
    printf("Enter the info to be inserted:");
    scanf("%d",&z->info);
    while(y->rpt!=NULL)
    {
        y=y->rpt;
    }
    y->rpt=z;
    z->lpt=y;
    z->rpt=NULL;
}
//function to insert after any given data
void insert_at_any() 
{
    int data;
    struct node*x,*y,*z;
    x=first;
    z=(struct node*)malloc(sizeof(struct node));
    printf("Enter info of new node: ");
    scanf("%d",&z->info);
    printf("Enter data after which you want to insert: ");
    scanf("%d",&data);
    while(x->info!=data)
    {
        x=x->rpt;
    }
    y=x->rpt;
    z->lpt=y;
    z->rpt=y;
    x->rpt=z;
    z->lpt=x;
}
//function for deletion at beg
void deletion_at_beg()
{
    struct node*x;
    x=first;
    first=x->rpt;
    x=NULL;
}
// function for deletion from end
void deletion_at_end()
{
    struct node*x,*y;
    x=first;
    while(x->rpt!=NULL)
    {
        y=x;
        x=x->rpt;
    }
    y->rpt=NULL;
    free(x);
}
// function for deltion from any
void deletion_at_any()
{
    int data;
    struct node *x,*y,*z;
    x=first;
    printf("Enter the info you want to delete: ");
    scanf("%d",&data);
    while(x->info!=data)
    {
        y=x;
      x=x->rpt;
    }
    z=x->rpt;
    y=z->lpt;
    z=y->rpt;
    free(x);
}