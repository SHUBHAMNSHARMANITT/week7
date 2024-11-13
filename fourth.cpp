#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n1 , n2 ;
	scanf("%d",&n1);
	int arr1[0], arr2[0];
	printf("How many elements you want to enter in array 1 :");
	scanf("%d",&n1);
	int *arr1 = (int*)malloc(n1*sizeof(int));
	for(int i=0;i<n1;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr1[i]);
    }
    printf("How many elements you want to enter in array 2 :");
    scanf("%d",&n2);
	int *arr2 = (int*)malloc(n2*sizeof(int));
	
	int n3;
	int append[n1+n2];
	for (int i = 0 ; i <n1 ; i++)
	append[i]=arr1[i];
	for (int j = n1 ; j <n2 ; j++)
	append[j]=arr2[j-n1];
	
	return 0;
}
