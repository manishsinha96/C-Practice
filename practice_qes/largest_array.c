#include<stdio.h>

int returnMax(int array[],int n)
{
	//array[4]=200;
	int max = 0;
	for(int i =0;i<n;i++)
	{
	if(max<array[i])
	max = array[i];
	}
	return max;
}

int main()
{
	int arr[10] = {5,6,8,10,60,500,90,111,200};
	int max = returnMax(arr,10);
	printf("the maxmum element in array is %d\n",max);	
	for(int i = 0;i<10;i++)
	printf("the array element %d is %d\n",i,arr[i]);




	return 0;
}
