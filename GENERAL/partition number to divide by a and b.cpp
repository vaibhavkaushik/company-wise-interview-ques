#include <bits/stdc++.h>
using namespace std;

bool check(string s,int divider)
{
	int num,size=s.size();
	
	int remainder = (s[0]-'0')%divider;
	
	for(int i=1;i<size;i++)
	{
		remainder = ((remainder*10)%divider + s[i]%divider)%divider; 	
	}
	
	if(remainder==0)
	return true;
	
	return false;
}

void check_partition(string s,int a,int b)
{
	int size = s.size();
	string temp1="",temp2="";
	for(int i=0;i<size-1;i++)
	{
	   temp1+=s[i];
	   temp2=s.substr(i+1);
	   
	   if((check(temp1,a)&&check(temp2,b))||(check(temp1,b)&&check(temp2,a)))
	   { 
		cout<<"YES"<<endl;
		cout<<temp1<<" "<<temp2<<endl;
		break; 	
	   }
	   
	   
	}
}


int main() 
{

	check_partition("12417",2,3);


	return 0;
}
