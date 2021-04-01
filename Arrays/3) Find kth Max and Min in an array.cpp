//Question 3:
//Find Kth Maximum And Minimum element in the array

//Solution By Kunal Choudhary
//Time Complexity: O(nlogn)

#include <iostream>
#include <algorithm>
using namespace std;

void findKthMinMax(int arr[], int n, int k)
{
	sort(arr,arr+n);
	cout<<"kth Minimum Value: "<<arr[k-1]<<endl;
	cout<<"kth Maximum Value: "<<arr[n-k]<<endl;
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
		cout<<"Enter value of K: ";
		cin>>k;
		findKthMinMax(arr,n,k);
	}
}