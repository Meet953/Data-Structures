#include<stdio.h>
#include<conio.h>
int a[100],i,j,temp,k,n,count,count2;
void insert(){

printf("How Many Elements to be stored in array: ");
scanf("%d",&n);
printf("\nEnter array Elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}


void displaya(){

printf("\nArray Before Sorting : ->\n ");
for(i=0;i<n;i++)
printf("  %3d ",a[i]);
count++;
for(k=0;k<n;k++)
{
	for(j=0;j<n-1-k;j++)
	{
	count2++;
	if(a[j]>a[j+1])
	{

	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	count++;

	printf("\n\Array Pass %2d: " ,k+1);
	for(i=0;i<n;i++)
	printf("%3d  ",a[i]);

}

printf("\nArray After Sorting in Ascending: -> \n");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
printf("\nArray After Sorting in Descending: -> \n");
for(i=n-1;i>=0;i--)
printf("\t%d",a[i]);

		printf("\nTotal comparisons made are %d",count);
		printf("\nTotal swaps made are %d\n",count2);
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
	  displaya();
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