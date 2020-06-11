#include <iostream>
using namespace std;

int main() {
	// your code goes here

	while(true)
	{   string s;
	    int i;
		cin>>s;
		if(s[0]=='0')
		{
			break;
		}
		long int dp[5001]={0};
		int f=0;
		dp[0]=1;
		dp[1]=1;
		for(i=1;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				if(s[i-1]=='2'||s[i-1]=='1')
				{    dp[i]=dp[i-1];
				     dp[i+1]=dp[i];
				}
				else
				{
					f=1;
					cout<<"0"<<endl;
					break;
				}
			}
			else if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6')
			{
				dp[i+1]=dp[i]+dp[i-1];
			}
			else
			{
				dp[i+1]=dp[i];
			}
		}
		if(f==0)
        {


		cout<<dp[s.length()]<<endl;}
	}
	return 0;
}
