#include<stdio.h>
#include<conio.h>
int i,j,n,temp,a[30];

void insert(){
	printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");

    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
}

void sort(){
    for(i=1;i<=n-1;i++)
    {
	temp=a[i];
	j=i-1;

	while((temp<a[j])&&(j>=0))
	{
	    a[j+1]=a[j];
	    j=j-1;
	}

	a[j+1]=temp;
    }

    printf("\nSorted list\n");
    for(i=0;i<n;i++)
    {
	printf("%d ",a[i]);
    }
}


int main()
{
int choice;
clrscr();
while(1)
{
  printf("\n1.Insert");
  printf("\n2.Display");
  printf("\n3.Quit");
  printf("\nEnter your choice");
  scanf("%d",&choice);
switch(choice)
{
case 1:insert();break;
case 2:sort();break;
case 3:exit(0);
default:printf("\nWrong Choice");
}
}
getch();
return 0;

}