#include <stdio.h>



int main()
{

	int arr[10],revArr[10];

	int i,j;

	int n;


	printf("Enter total number of elements: ");
	scanf("%d",&n);

	//read array elements
	printf("Enter array elements:\n");
	for(i=0;i<= 10;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	//store reverse values of arr into revArr
	for(i=(n-1),j=0; i>=0; i--,j++)
	{
		revArr[j]=arr[i];
	}

	printf("\nArray elements after reverse:\n");
	for(i=0;i< n;i++)
	{
		printf("%d\n",revArr[i]);
	}

	return 0;
}
