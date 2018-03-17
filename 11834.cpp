#include <bits/stdc++.h>
using namespace std;
int main()
{
	double EPS=1e-7;
double l,b,r1,r2;
while(cin>>l>>b>>r1>>r2)
{if(l==0 && b==0 && r1==0 && r2==0)
	break;
int ef;
double e=sqrt((l-r1-r2)*(l-r1-r2)+(b-r1-r2)*(b-r1-r2))-r1-r2;
if(2*r1<=min(l,b) && 2*r2<=min(l,b) & l>=(r1+r2) && b>=r1+r2 && e>=0-EPS)
	ef=2;
else
	ef=1;
if(ef==2)
	cout<<"S"<<endl;
else
	cout<<"N"<<endl;

}



}