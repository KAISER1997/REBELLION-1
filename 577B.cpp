#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<long long int> arr;
long long int n,x;
cin>>n>>x;
for(long long int t=0;t<n;t++)
{
long long int z;
cin>>z;
arr.push_back(z%x);
}
int store[11111]={0},prev[11111]={0};
for(int r=1;r<=x;r++)
{
	store[r]=9999999;
	 prev[r]=9999999;
}

int u=0;
for(int t=0;t<n;t++)
{
for(int e=0;e<=x;e++)
{
if(prev[e]==0)
{
	if((e+arr[t])%x==0)
		{u=1;
break;

		}
store[(e+arr[t])%x]=0;
}
}
if(u==1)
break;

for(int e=0;e<=x;e++)
{
prev[e]=store[e];
}
}
if(u==1)
	cout<<"YES";
else
	cout<<"NO";
}










 