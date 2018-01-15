#include <bits/stdc++.h>
using namespace std;
int main()
{
int ans=0,ans2=0;
int n,po,l,r,pos;
cin>>n>>po>>l>>r;
 
if(po>=l && po<=r)
{

if(r!=n)
{
pos=r;
ans=ans+r-po+1;
}
if(l!=1)
   ans+=r-l+1;

if(l!=1)
{

	pos=l;
	ans2+=po-l+1;

}
if(r!=n)
ans2+=r-l+1;

ans=min(ans,ans2);
 

}
else if(po>r)
{
pos=r;
ans+=po-r+1;

if(l!=1)
	ans+=r-l+1;

}
else if(po<l)
{
pos=l;
ans+=l-po+1;
if(r!=n)
	ans+=r-l+1;



}
cout<<ans;
}




 