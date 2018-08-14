#include <bits/stdc++.h>
using namespace std;

bool is_pal(string s)
{
	int start=0,end=s.size()-1;
	
	while(end>start)
	{
		if(s[start]!=s[end])
		return false;
		
		start++,end--;
	}
	
	return true;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string num;
		cin>>num;
		int size = num.size(), sum=0;
		for(int i=0;i<size;i++)
		{
			sum+=(num[i]-'0');
		}
		
		if(is_pal(to_string(sum)))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
