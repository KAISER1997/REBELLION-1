#include <bits/stdc++.h>
using namespace std;
 
long long int gcd(long long int a, long long int b) { return (b == 0 ? a : gcd(b, a % b)); }
long long int x,y;
long long int mode(long long int x)
{
if(x<0) return(-1*x);
else
return(x);

}
void ExtendedEuclid(long long int a,long long int b)
{

if(b==0)
{
x=1;
y=0;
return;
}

ExtendedEuclid(b,a%b);
 
long long int dumx,dumy;
dumx=y;
dumy=x-y*(a/b);
x=dumx;
y=dumy;
}


int main()
{
long long int g,h;
while(cin>>g>>h)
{
	if(g==0 && h==0 )
          break;
         long long  int g1,h1;
long long int r=gcd(g,h);
//cout<<r;
g1=g/r;
h1=h/r;

 
 ExtendedEuclid(g1,h1);

 cout<<x<<" "<<y<<" "<<r<<endl;
 
}

}