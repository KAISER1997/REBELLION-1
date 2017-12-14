#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int  main()
{

int  a,b,c,d;
cin>>a>>b>>c>>d;
int ansn,ansd;
float q=(float)a/float(b);
float w=(float)c/float(d);
if(w>q)
{
ansn=b*c-a*d;
ansd=b*c;
}
else
{
ansn=a*d-b*c;
ansd=a*d;
}


int h=gcd(ansn,ansd);
ansn=ansn/h;
ansd=ansd/h;
cout<<ansn<<"/"<<ansd;







}