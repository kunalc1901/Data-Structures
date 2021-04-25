//Question 6:
//Find Intersection and Union of two sorted arrays

//Solution by Kunal Choudhary
//Time Complexity: O(nlogn)

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int p, int q, int key)
{
	int mid = (p+q)/2;	
	while(p<=q)
	{
		if(key<arr[mid])
		q = mid-1;
		else if(key>arr[mid])
		p = mid+1;
		else
		return 1;
		mid = (p+q)/2;
	}
	return 0;
}

void findIntersectionAndUnion(int arr1[], int arr2[], int n, int m)
{
	int intersection[n+m], uni[n+m], count1=0, count2=0;
	
	for(int i=0; i<n; i++)
	{
		if(binarySearch(arr2,0,m-1,arr1[i]))
		{
			intersection[count1]=arr1[i];
			count1++;
		}
		uni[i]=arr1[i];
	}
	for(int i=0; i<m; i++)
	{
		if(!binarySearch(uni,0,n-1,arr2[i]))
		{
			uni[count2+n]=arr2[i];
			count2++;
		}
	}
	
	cout<<"Intersection:\n{ ";
	for(int i=0; i<count1; i++)
	cout<<intersection[i]<<" ";
	cout<<"}\n";
	
	sort(uni,uni+n+count2);
	cout<<"Union:\n{ ";
	for(int i=0; i<(n+count2); i++)
	cout<<uni[i]<<" ";
	cout<<"}\n";	
}

int main()
{
	int test;
	cout<<"Enter the number of test cases: ";
	cin>>test;
	
	while(test--)
	{
		int n,m;
		cout<<"\n\nEnter the size of Array 1: ";
		cin>>n;
		int arr1[n];
		cout<<"Enter "<<n<<" elements in the Array 1 in sorted order:\n";				
		for(int i=0; i<n; i++)
		cin>>arr1[i];
		
		cout<<"Enter the size of Array 2: ";
		cin>>m;
		int arr2[m];	
		cout<<"Enter "<<m<<" elements in the Array 2 in sorted order:\n";		
		for(int i=0; i<m; i++)
		cin>>arr2[i];
		
findIntersectionAndUnion(arr1,arr2,n,m);	
	}
}