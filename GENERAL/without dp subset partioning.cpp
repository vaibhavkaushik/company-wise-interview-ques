#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int *arr,int sum,int size)
{
	if(sum==0 && size==0)
	return true;
	
	if(sum!=0 && size==0)
	return false;
	
	if(sum<0)
	return false;
	
	return subsetsum(arr+1,sum-arr[0],size-1)||subsetsum(arr+1,sum,size-1);
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int sum=0,arr[size]={0};
		
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		
		if(sum&1)
		cout<<"NO"<<endl;
		else
		{ 
			if(subsetsum(arr,sum/2,size))
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
			
		}
			
	} 
	return 0;
}
