//Question 7:
//Program to cyclic rotate the array by one

//Solution By Kunal Choudhary
//Time Conplexity: O(n)

#include <iostream>
using namespace std;

void cyclicRotateArray(int arr[], int n)
{
	int temp;
	temp=arr[n-1];
	for(int i=n; i>=1; i--)
	arr[i]=arr[i-1];
	arr[0]=temp;
}

int main()
{
	int test;
	cout<<"Enter the number of test cases: ";
	cin>>test;
	
	while(test--)
	{
		int n;
		cout<<"\n\nEnter the size of array: ";
		cin>>n;
		
		int arr[n];
		
		cout<<"Enter "<<n<<" elements in the array\n";		
		for(int i=0; i<n; i++)
		cin>>arr[i];
		
		cyclicRotateArray(arr,n);
		
		cout<<"Cyclic Rotated Array by one is:\n";	
		for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	}
}