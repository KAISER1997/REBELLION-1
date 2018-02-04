#include <bits/stdc++.h>
using namespace std;
int main()
{


int dp[99999]={0};

int n;
 
dp[2]=1;
dp[0]=1;
for(int c=4;c<=20;c++)
for(int r=0;r<=c-2;r+=2)
{
dp[c]+=dp[r]*dp[c-r-2];
}
int e=0;
while(cin>>n)
{
if(e!=0)
	cout<<endl;
cout<<dp[n*2]<<endl;
++e;
}



}