#include<stdio.h>
#include<conio.h>

struct node
{
struct node * lc;
int data;
struct node * rc;
};
struct node * buildtree(int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
int a[]={ '3','5','9','6','8','20','10','/0','/0','9'};

void main( )
{
struct node * root;
clrscr();
root= buildtree(0);
printf("\n Inorder Traversal");
inorder(root);
preorder(root);
postorder(root);
getch( );
}

struct node * buildtree(int n)
{
struct node * temp=NULL;
if( a[n] != '\0')
{
temp = (struct node *) malloc(sizeof(struct node));
temp-> lc=buildtree(2*n + 1);
temp-> data= a[n];
temp-> rc=buildtree(2*n + 2);
}
return temp;
}

void inorder(struct node * root)
{
if(root != NULL)
{
inorder(root-> lc);
printf("%d\t",root->data);
inorder(root->rc);
}
}
void preorder(struct node * root)
{
if(root != NULL)
{
	printf("%d\t",root->data);
inorder(root-> lc);
inorder(root->rc);
}
}
void postorder(struct node * root)
{
if(root != NULL)
{
inorder(root-> lc);
inorder(root->rc);
printf("%d\t",root->data);
}
}