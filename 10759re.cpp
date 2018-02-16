#include <bits/stdc++.h>
using namespace std;
unsigned long long   gcd(unsigned long long   u, unsigned long long   v)
{
    return u%v==0?v:gcd(v,u%v);
}
int main()
{
 
while(1!=0)
{
	unsigned long long   n,x ;
cin>>n>>x;
if(n==0 && x==0)
break;
unsigned long long   arr[200][1111]={0},tot=0,ans=0;
for(int e=1;e<=6;e++)
arr[1][e]=1;
for(int e=2;e<=n;e++)
{
for(int f=1;f<=n*6;f++)
{
for(int t=1;t<=6;t++)

{
	if(f>=t)
arr[e][f]+=arr[e-1][f-t];



}
}
}
for(int e=x;e<=n*6;e++)
	ans+=arr[n][e];
unsigned long long   ef=1;
for(int w=1;w<=n;w++)
ef=ef*6;
unsigned long long   hh=gcd(ans,ef);
ef=ef/hh;
ans=ans/hh;
if(ans==0)
	cout<<"0"<<endl;
else if(ans==ef)
	cout<<"1"<<endl;
else

cout<<ans<<"/"<<ef<<endl;

}




}





