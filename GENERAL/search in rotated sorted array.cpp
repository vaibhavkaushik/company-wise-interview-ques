#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int h, int key)
{
    if (l > h) return -1;
 
    int mid = (l+h)/2;
    if (arr[mid] == key) return mid;
 
   
    if (arr[l] <= arr[mid])
    {
       if (key >= arr[l] && key <= arr[mid])
        return search(arr, l, mid-1, key);
 
        return search(arr, mid+1, h, key);
    }
 
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid+1, h, key);
 
    return search(arr, l, mid-1, key);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,change1;
		cin>>size;
		int arr[size]={0};
		for(int i=0;i<size;i++)
		{
		   cin>>arr[i];
		}
		int ele;
		cin>>ele;
		
	    if(search(arr,0,size-1,ele)!=-1)
		   cout<<search(arr,0,size-1,ele)<<endl;
 		else
		cout<<"-1"<<endl;
	}
	
	return 0;
}
