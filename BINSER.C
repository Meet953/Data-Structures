#include<stdio.h>
#include<conio.h>
int BinarySearch(int array[100], int number_of_elements, int key)
{
	int low = 0, high = number_of_elements-1, mid;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(array[mid] < key)
		{
			low = mid + 1;
		}
		else if(array[mid] == key)
		{
			return mid;
		}
		else if(array[mid] > key)
		{
			high = mid-1;
		}

	}
	return -1;
}
int main()
{
	int number_of_elements;
	int key,index;
	int array[100];
	int no;
	clrscr();
	printf("\nEnter no of elements in array\n");
	 scanf("%d",&number_of_elements);
	
	for(no = 0;no < number_of_elements;no++)
	{
		scanf("%d",&array[no]);
	}
	
	for(no = 1;no < number_of_elements;no++)
	{
		if(array[no] < array[no - 1])
		{
			printf("Given input is not sorted\n");
			getch();
			return 0;
		}
	}

	printf("Enter the number to be searched\n");
	scanf("%d",&key);
	
	index = BinarySearch(array,number_of_elements,key);
	if(index==-1)
	{
		printf("Element not found\n");
	}
	else
	{

		printf("Element is at index %d\n",index+1);
        }
		getch();
        return 0;
}


