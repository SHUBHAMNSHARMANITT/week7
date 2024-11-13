#include<stdio.h>
#include<stdlib.h>
int reverse(int *a , int size)
{
	for (int i = size-1 ; i >= 0 ; i--)
	printf("%d ",a[i]);
	return 0;
	}
int main ()
{
	int n ;
	printf("Welcome\nPlease Enter how many numbers you want to enter in your array :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    printf("The array in reverse order is :\n");
    reverse(arr, n);
    return 0 ;
}
