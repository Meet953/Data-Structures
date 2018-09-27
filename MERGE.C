#include <stdio.h>
#include <conio.h>
//#define max 10

int a[10];
int b[10];
int i,n;

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
	 b[i] = a[l1++];
      else
	 b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   }else {
      return;
   }
}

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

   printf("List before sorting\n");

   for(i = 0; i < n; i++)
      printf("%d ", a[i]);

   sort(0, n);

   printf("\nList after sorting\n");

   for(i = 1; i <= n; i++)
      printf("%d ", a[i]);
}

int main() {

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