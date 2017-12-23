#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int lcm(int a, int b) { return (a * (b / gcd(a, b))); }
int main()
{
int a1,a2,a3,a4;
cin>>a3>>a2>>a1>>a4;
int u=max(max(max(a1,a2),a3),a4);
u=2*u+1;
int fa1,fa2,fa3,fa4,xx=0;
int rr=a3*a1*a2*a4;
for(int z=u;z>=0;z--)
{

if(xx==1)
	break;
for(int y=u;y>=0;y--)
{   
	if(xx==1)
	break;
for(int x=u;x>=0;x--)
{ 
	//cout<<z<<" "<<y<<" "<<x<<endl;
if(z>y && y>x)
{
if((2*a3>=z) && z>=a3 && y>=a2 && x>=a1  && (2*a2>=y) && (2*a1>=x) && (a4<=x) && (2*a4<z) && (2*a4<y) && (2*a4>=x))
{
fa1=x;
fa2=y;
fa3=z;
xx=1;
}

if(xx==1)
	break;



}
}
}
}

if(xx==0)
	cout<<"-1";
else
	cout<<fa3<<endl<<fa2<<endl<<fa1;






}




 