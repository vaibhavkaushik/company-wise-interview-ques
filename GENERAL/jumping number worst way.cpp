#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,last_index;
		cin>>n;
		vector<int> ans[10];
		
		for(int i=0;i<10;i++)
		ans[i].clear();
		
		int arr[n+5]={0};
		for(int i=0;i<(n+1);i++)
		{
		
    int k=0;
		 string s = to_string(i);
		 last_index = s.size()-1;
		
    if(s.size()==1)
		 {
		 	ans[s[0]-'0'].push_back(stoi(s));
		 	arr[stoi(s)]=1;
		 }
     
		 if(i>0 &&arr[stoi(s)]==1)
		 for(int j=0;j<=9;j++)
		 {
		      string s = to_string(i);
		      if(abs((s[last_index]-'0')-j)==1)
		      { s+=to_string(j);
		        if(stoi(s)<=n&&arr[stoi(s)]!=1)
		        { 
		       	arr[stoi(s)]=1;
		            ans[s[0]-'0'].push_back(stoi(s));
		        }
		      }
		   }
		}
    
		for(int i=1;i<=9;i++)
		sort(ans[i].begin(),ans[i].end());
		
		for(int i=0;i<=9;i++)
		{ 
		  int size = ans[i].size();
		  for(int j=0;j<size;j++)
		  { cout<<ans[i][j]<<" ";}
		} 
		 cout<<endl;
	
	}
	return 0;
}
