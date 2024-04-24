#include <iostream>

using namespace std;

void print (int arr[], int n);
void SelectionSort(int arr[], int n);

int main()
{
	int arr[]= {20,12,10,15,2};
	int i,j,n,temp;
	n = sizeof(arr)/sizeof(int);
	cout << "sebelum array di sorting : ";
	print(arr,n);
	SelectionSort(arr,n);
	cout << "Setelah array di sorting : ";
	print(arr,n);
	return(0);
}
void print (int arr[], int n)
{
	for(int i =0;i<n;i++)
		cout <<arr[i]<< " "; cout << endl;
}
void SelectionSort(int arr[], int n)
{
	int i,j,min_in;
	for(i=0;i<n;i++)
	{
		min_in = i;
		for(j=i+1;j<n;j++)
			if (arr[j] < arr[min_in])
				min_in =j;
		swap(arr[i],arr[min_in]);
	}
}
