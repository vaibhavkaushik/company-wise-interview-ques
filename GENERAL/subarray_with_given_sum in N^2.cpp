#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,sum,found=0;
		cin>>size>>sum;
		int arr[size];
		
		vector<pair<int,pair<int,int>>> v;
		
		for(int i=0;i<size;i++)
		{ 
		  cin>>arr[i];
		}
		 
		 
		for(int i=0;i<size;i++)
		{
		    int internal_sum=0;
		   for(int j=i;j<size;j++)
		  {	
		  
		    internal_sum += arr[j];
		    if(internal_sum==sum)
		    {
		      cout<<i+1<<" "<<j+1<<endl;
		      found=1;
		      break;
		    }
		  	
		  }
		  if(found==1) break;
		}
		
		if(!found)
		cout<<"-1"<<endl;
	}



	return 0;
}
