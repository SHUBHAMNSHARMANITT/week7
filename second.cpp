#include<stdio.h>
#include<stdlib.h>
int largest(int *a , int size)
{
	int max = a[0];
	for(int i = 0 ; i < size ; i++)
	{
		if(a[i]>max)
		max = a[i];
		
	}
	printf("The largest number of the given array is %d", max);
	return 1 ;
}
int main()
{
	int arr[0];
	int n ; 
	printf("Enter how many elements you want to store dynamically :");
	scanf("%$d",&n);
	int* a = (int*)malloc(n*sizeof(int));
	for(int i = 0 ;  i<n ; i++)
	{ 
		printf("\nElement no. %d:",i+1);
		scanf("%d", &arr[i] );
	
	}
		largest(arr,n);
	return 0;
}
