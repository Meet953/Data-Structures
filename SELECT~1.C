#include<stdio.h>
#include<conio.h>
int a[100],i,j,temp,k,n,min,loc,count;

void insert(){
printf("How Many Elements to be stored in array: ");
scanf("%d",&n);
printf("\nEnter array Elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}

void display(){
printf("\nArray Before Sorting : ->\n ");
for(i=0;i<n;i++)
printf("  %d ",a[i]);

for(i=0;i<=n-1;i++)
{
min=a[i];
loc=i;
    count++;
	for(j=i+1;j<n-1;j++)
	{
	if(a[j]<min)
	{
	min=a[j];
	loc=j;
	}
	}
	if(loc!=i)
	{
	  temp=a[i];
	 a[i]=a[loc];
	 a[loc]=temp;
	}
count++;
	}
printf("\nComparisons Made are-> %d\n\n",count);
printf("\nArray After Sorting : -> \n");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
main()
{
int choice;
clrscr();
    while (1)
    {
	printf("\n1.Insert \n");
	printf("2.Display \n");
	printf("3.Quit \n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	switch(choice)
	{
	    case 1:
	    insert();
	    break;
	    case 2:
	  display();
	    break;
	    case 3:
	    exit(0);
	    default:
	    printf("Wrong choice \n");
	}
    }
getch();
return 0;
}