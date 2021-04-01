//Question 4:
//Given the array which consists of only 0 1,2. Sort the array without using any sorting algorithm

//Solution By Kunal Choudhary
//Time Complexity: O(n)

#include <iostream>
using namespace std;

void mySort(int arr[], int n)
{
	int zeroCount=0, oneCount=0, twoCount=0;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]==0)
		zeroCount++;
		else if(arr[i]==1)
		oneCount++;
		else
		twoCount++;
	}

	for(int i=0; i<zeroCount; i++)
	arr[i]=0;
	
	for(int i=zeroCount; i<(zeroCount+oneCount); i++)
	arr[i]=1;
	
	for(int i=(zeroCount+oneCount); i<(zeroCount+oneCount+twoCount); i++)
	arr[i]=2;
}

int main()
{
	int test;
	cout<<"Enter the number of test cases: ";
	cin>>test;
	
	while(test--)
	{
		int n,k;
		cout<<"\n\nEnter the size of array: ";
		cin>>n;
		
		int arr[n];
		
		cout<<"Enter "<<n<<" elements in the array\n";		
		for(int i=0; i<n; i++)
		cin>>arr[i];
		
		mySort(arr,n);
		
		cout<<"Sorted array is:\n";		
		for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	}
}