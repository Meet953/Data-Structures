#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;

void insert();
void create();
int maxDepth(struct btnode* btnode);
void search(struct btnode *t);
int flag = 1;


void main()
{
    int ch;

    printf("\nOPERATIONS ---");
    printf("\n1 - Insert an element into tree\n");
    printf("2 - Height\n");
    printf("3 - Exit\n");
    while(1)
    {
	printf("\nEnter your choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    insert();
	    break;
	case 2:
	  maxDepth(root);
	    break;
	case 3:
	    exit(0);
	default :
	    printf("Wrong choice, Please enter correct choice  ");
	    break;
	}
    }
	getch();
	return 0;
}

/* To insert a node in the tree */
void insert()
{
    create();
    if (root == NULL)
	root = temp;
    else
	search(root);
}
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
	search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
	t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
	search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
	t->l = temp;
}

/* To create a node */
void create()
{
    int data;

    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}

int maxDepth(struct btnode* btnode)
{
   if (btnode==NULL)
       return 0;
   else
   {
       int lDepth = maxDepth(btnode->l);
       int rDepth = maxDepth(btnode->r);


       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
} 