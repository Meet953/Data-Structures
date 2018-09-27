#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
struct btnode 
{
    int value;
    struct btnode* l;
    struct btnode* r;
};
 

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
 

struct btnode* newbtnode(int value) 
{
    struct btnode* btnode = (struct btnode*)
                                malloc(sizeof(struct btnode));
    btnode->value = value;
    btnode->l = NULL;
    btnode->r = NULL;
   
    return(btnode);
}
   
int main()
{
    struct btnode *root = newbtnode(1);
 
    root->l = newbtnode(2);
    root->r = newbtnode(3);
    root->l->l = newbtnode(4);
    root->l->r = newbtnode(5); 
   
    printf("Hight of tree is %d", maxDepth(root));
   
    getch();
    return 0;
}