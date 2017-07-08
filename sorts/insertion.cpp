#include<iostream>
#include<stdlib.h>
using namespace std;


void insertion_sort(int *arr,int n)
{
	for(int i=0; i<n-1; i++)
	{
		int key = arr[i+1];
		int j = i;
		while(arr[j] > key && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main()
{
	int arr[100];
	for(int i=0; i<100; i++)
	{
		arr[i] = rand() % 100;
	}
	insertion_sort(arr,100);
	for(int i=0; i<100; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}