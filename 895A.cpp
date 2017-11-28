#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mod(int a)
{


	if(a<0)return(a*-1);
	else return(a);
}


int main()
{
	int n;
cin>>n;
int mint=9999;
int arr[9999]={0};
for(int t=1;t<=n;t++)
	cin>>arr[t];
int start=1;
for(int f=1;f<=n;f++)
{
start=f;
int sum=0;
for(int e=1;e<=n;e++)
{
sum=sum+arr[start];
++start;
if(start==n+1) start=1;

mint=min(mint,mod(360-(2*sum)));
}

}
cout<<mint;
}







 










 