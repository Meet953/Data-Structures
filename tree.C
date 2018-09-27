#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node
{
    int value;
   struct node* left;
   struct node* right;

};


struct node* root;

struct node* insert(struct node* r, int data);
void inOrder(struct node* r);
void preOrder(struct node* r);
void postOrder(struct node* r);

void main()
{
int n,v,i;
     clrscr();

    root=NULL;
    printf("How many element do you want to insert ?\n");
    scanf("%d", &n);

    for( i=0; i<n; i++){
	printf("Element No. %d: ", i+1);
	scanf("%d", &v);
	root = insert(root, v);
    }

    printf("Inorder Traversal: ");
    inOrder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preOrder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postOrder(root);
    printf("\n");


    getch();
}

struct node* insert(struct node* r, int data)
{
    if(r==NULL)
    {
	r = (struct node*) malloc(sizeof(struct node));
	r->value = data;
	r->left = NULL;
	r->right = NULL;
    }
    else if(data < r->value){
	r->left = insert(r->left, data);
    }
    else {
	r->right = insert(r->right, data);
    }
    return r;

}

void inOrder(struct node* r)
{
    if(r!=NULL){
	inOrder(r->left);
	printf("%d ", r->value);
	inOrder(r->right);
    }
}

void preOrder(struct node* r)
{
    if(r!=NULL){
	printf("%d ", r->value);
	preOrder(r->left);
	preOrder(r->right);
    }
}

void postOrder(struct node* r)
{
    if(r!=NULL){
	postOrder(r->left);
	postOrder(r->right);
	printf("%d ", r->value);

    }
}