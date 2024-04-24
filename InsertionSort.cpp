#include <iostream>

using namespace std;

void printArray (int arr[], int n);
void insertionSort(int arr[], int n);

int main()
{
	int arr[]= {9,5,1,4,3};
	int n = sizeof(arr)/sizeof(int);
	cout << "Sebelum array di sorting : ";
	printArray(arr,n);
	insertionSort(arr,n);
	cout << "Setelah array di sorting : ";
	printArray(arr,n);
	return(0);
}
void printArray (int arr[], int n)
{
	for(int i =0;i<n;i++)
	{
		cout <<arr[i]<< " ";
	}
	cout << endl;
}
void insertionSort(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j =i -1;
		while (key<arr[j] && j >= 0)
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}
