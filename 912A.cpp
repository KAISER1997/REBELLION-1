#include <bits/stdc++.h>
using namespace std;
int main()
{

long long int a,b;
cin>>a>>b;
long long int x,y,z;
cin>>x>>y>>z;
long long int yc,bc;
yc=2*x+y;
bc=y+3*z;
long long int t=0;
if(a<yc)
	t+=yc-a;
if(b<bc)
	t+=bc-b;
cout<<t;







}