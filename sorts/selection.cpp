#include<iostream>
#include<stdlib.h>

using namespace std;
void selection_sort(int *arr,int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1 ;j < n; j++)
		{
			int min = i;
			if(arr[i] > arr[j])
			{
				min = j;
			}
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}


int main()
{
	int arr[100];
	for(int i = 0; i < 100 ; i++)
	{
		arr[i] = rand() % 100;
	}
	selection_sort(arr,100);
	for(int i = 0; i < 100 ; i++)
	{
		cout << arr[i]<<endl;
	}
	return 0;
}