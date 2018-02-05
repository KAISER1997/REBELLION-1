#include <bits/stdc++.h>
using namespace std;

long long int mod=1000000007;
long long int store[2002][2002]={0};
 long long int ncrModp( long long int n, long long int r, long long int p)
 
{
 long long int value[9999]={0};
value[0]=1;
for( long long int e=1;e<=n;e++)
{
	store[e][0]=1;
for( long long int f=e;f>0;f--)
{
value[f]=(value[f]+value[f-1])%p;
 //cout<<value[f]<<" ";
store[e][f]=value[f];
}
 
// cout<<endl;
}
return(value[r]);

}
 










int main()

{

long long int n;
cin>>n;
vector<long long int > arr;
long long int l=0;
for(long long int r=1;r<=n;r++)
{
long long int e;
cin>>e;
arr.push_back(e);
l=l+e;
}
ncrModp(l,l,mod);
long long int s=arr[0];
long long int tot=1;
for(long long int e=1;e<arr.size();e++)
{
long long int up=s+arr[e]-1;
long long int down=s;

// cout<<up<<" "<<down<<endl;
 // cout<<store[up][down]<<endl;
tot=tot*store[up][down];
tot=tot%mod;
s+=arr[e];
}

cout<<tot;







}