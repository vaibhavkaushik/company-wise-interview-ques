
 #include <bits/stdc++.h>
using namespace std;
int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}



int atoi(string str)
{
    int size = str.size();
    int ans;
    
    if(str[0]=='-')
    {
        if((str[1]-'0')>=0 && (str[1]-'0')<=9)
        ans = str[1]-'0';
        else
        return -1;
    
            for(int i=2;i<size;i++)
    {
        if((str[i]-'0')>=0 && (str[i]-'0')<=9)
        ans = ans*10 + (str[i]-'0');
        
        else
        return -1;
        
    }
    
    return ans*-1;
        
    }


    else if((str[0]-'0')>=0 && (str[0]-'0')<=9)
    ans = str[0]-'0';
    else
    return -1;
    
    
    for(int i=1;i<size;i++)
    {
        if((str[i]-'0')>=0 && (str[i]-'0')<=9)
        ans = ans*10 + (str[i]-'0');
        
        else
        return -1;
        
    }
    
    return ans;
}
