#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
	if(n==0)
		break;
double mavv=-1;
int ans;
for(int e=0;e<n;e++)
{
double a,b;
cin>>a>>b;
double u=mavv;
mavv=max(mavv,max(max(min(a/4,b),min(a,b/4)),min(a,b)/2));
if(u!=mavv)
ans=e+1;
}

cout<<ans<<endl;

}
}