#include <bits/stdc++.h>
using namespace std;

long long int fire(long long  int n)
{
long long  int u=sqrt(n);
if((u*u)==n)
return(0);
 
long long  int v1=u*u;
long long int v2=(u+1)*(u+1);
long long int h1=n-v1;
long long int h2=v2-n;
return(min(h1,h2));
}


int main()
{

long long  int n,sum=0;
cin>>n;
vector<long long  int > arr;
for(long long  int e=1;e<=n;e++)
{
long long  int g;
cin>>g;
 if(g==0)
 arr.push_back(-1);
else
arr.push_back(fire(g));
}

sort(arr.begin(),arr.end());
for(long long  int e=0;e<n/2;e++)
{
if(arr[e]!=-1)
	sum=sum+arr[e];


}
for(long long  int e=n/2;e<n;e++)
if(arr[e]==0)
	++sum;
else if(arr[e]==-1)
	sum+=2;






cout<<sum;

}