//Question 5:
//Move all the negative elements to one side of the array

//Solution by Kunal Choudhary
//Time Complexity: O(n)

#include <iostream>
using namespace std;

void move(int arr[], int n)
{
	int neg[n], pos[n], negPointer=0, posPointer=0; 
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]<0)
		{
			neg[negPointer]=arr[i];
			negPointer++;
		}
		else
		{
			pos[posPointer]=arr[i];
			posPointer++;
		}	
	}
	
	for(int i=0; i<negPointer; i++)
	arr[i]=neg[i];
	
	for(int i=0; i<posPointer; i++)
	arr[i+negPointer]=pos[i];
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
		
		move(arr,n);
		
		cout<<"Resultant array is:\n";	
		for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	}
}