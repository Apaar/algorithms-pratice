#include<iostream>
#include<stdlib.h>

using namespace std;

int partition(int *arr,int l, int r)
{
	for(int i = 0; i < 10 ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int key = arr[l];
	int i = l+1;
	int j = r;
	while(j>=i)
	{
		while(i<=j && arr[i] < key)
			i++;
		while(i<=j && arr[j] > key)
			j--;
		if(i<j)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	
		int temp = arr[l];
		arr[l] = arr[j];
		arr[j] = temp;
	
	return i;

}


void quicksort(int *arr,int l,int r)
{
	if(r>l)
	{
		int s = partition(arr,l,r);
		cout<<s<<endl;
		quicksort(arr,l,s-1);
		quicksort(arr,s+1,r);
	}
}

int main()
{
	int arr[10];
	for(int i = 0; i < 10 ; i++)
	{
		arr[i] = rand() % 100;
	}
	quicksort(arr,0,9);
	for(int i = 0; i < 10 ; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}