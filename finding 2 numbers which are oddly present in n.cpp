#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int size = 2*n + 2;
		ll arr[size],xor_ans=0;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			xor_ans^=arr[i];
		}
		ll right_most_set = (xor_ans) & ~(xor_ans-1);
		ll ans1=0,ans2=0;
		for(int i=0;i<size;i++)
		{
		   if(right_most_set & arr[i])
		   ans1^=arr[i];
		   
		   else
		   ans2^=arr[i];
		}
		cout<<min(ans1,ans2)<<" "<<max(ans1,ans2)<<endl;
			
			
	}
	return 0;
}
