#include<iostream>
#include<stdlib.h>

using namespace std;

void merge(int *arr,int l, int m,int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	int temp1[n1];
	int temp2[n2];
	cout<<l<<" "<<r<<" "<<m<<endl;
	for(int i=0;i<n1;i++)
	{
		temp1[i] = arr[l + i];
	}
	for(int i=0;i<n2;i++)
	{
		temp2[i] = arr[m+1+i];
	}
	int i=0,j=0,k=l;
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
	while(i<n1)
	{
		arr[k] = temp1[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k] = temp2[j];
		j++;
		k++;
	}
}

void merge_sort(int *arr, int l, int r)
{
	int m = l + (r - l)/2;
	if(r-l > 1)
	{
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
	}
	
	merge(arr,l,m,r);
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