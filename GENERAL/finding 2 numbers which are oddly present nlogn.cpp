#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
    
    int t;
    cin>>t;
    while(t--)
    {
        map<ll,int> m;
        map<ll,int>::iterator itr;
        m.clear();
        int n;
        cin>>n;
        int size = (2*n)+2;
        ll arr[size]={0};
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        
        vector<ll> ans;
        
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second % 2!=0)
            ans.push_back(itr->first);
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }


	return 0;
}
