//Question 1:
//Reverse the array

//Solution By Kunal Choudhary
//Time Conplexity: O(n)

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
	int temp[n],start=0;
	for(int i=n-1; i>=0; i--)
	{
		temp[start]=arr[i];
		start++;
	}
	for(int i=0; i<n; i++)
	arr[i]=temp[i];	
}

int main()
{
	int test;
	cout<<"Enter the number of test cases: ";
	cin>>test;
	
	while(test--)
	{
		int n;
		cout<<"\n\nEnter size of array: ";
		cin>>n;
		
		int arr[n];
		
		cout<<"Enter "<<n<<" elements in the array\n";		
		for(int i=0; i<n; i++)
		cin>>arr[i];
		
		reverseArray(arr,n);
		
		cout<<"Reversed Array is\n";	
		for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	}
}