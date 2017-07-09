#include<iostream>
#include<stdlib.h>

using namespace std;

void merge_sort(int *arr, int l, int r)
{
	int m = l + (l - r)/2;
	if(l-r > 2)
	{
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
	}
	
	merge(arr,l,m,r);
}

void merge(int *arr,int l, int m,int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	int temp1[n1],int temp2[n2];

	for(int i=0;i<n1;i++)
	{
		temp1[i] = arr[l + i];
	}
	for(int i=0;i<n2;i++)
	{
		temp2[i] = arr[m+1+i];
	}
	int i=n1,j=n2,k=l;
	while(i<n1 && j<n2)
	{
		if(temp1[i]>temp2[j])
		{
			arr[k] = temp2[j];
			j++;
			k++;
		}
		else
		{
			arr[k] = temp1[i];
			i++;
			k++;
		}
	}
	if(i<n1)
	{
		arr[k] = temp1[i];
		i++;
		k++;
	}
	if(j<n2)
	{
		arr[k] = temp2[j];
		j++;
		k++;
	}
}


int main()
{
	int arr[100];
	for(int i = 0; i < 100 ; i++)
	{
		arr[i] = rand() % 100;
	}
	merge_sort(arr,0,99);
	for(int i = 0; i < 100 ; i++)
	{
		cout << arr[i]<<endl;
	}
	return 0;
}