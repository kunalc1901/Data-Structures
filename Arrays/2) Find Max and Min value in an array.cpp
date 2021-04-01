//Question 2;
//Find maximum and minimum valur in the array

//Solution By Kunal Choudhary
//Time Complexity: O(n)

#include <iostream>
using namespace std;

void findMinMax(int arr[], int n)
{
	int min=arr[0], max=arr[0];
	
	for(int i=0; i<n; i++)
	{
		if(min>arr[i])
		min=arr[i];
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"Minimum Value: "<<min<<endl;
	cout<<"Maximum Value: "<<max<<endl;
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
		
		findMinMax(arr,n);
	}
}