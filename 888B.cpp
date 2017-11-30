#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
string ee;
cin>>n>>ee;
int h=0,v=0;
for(int t=0;t<n;t++)
{
if(ee[t]=='L')
	--h;
if(ee[t]=='R')
	++h;
if(ee[t]=='U')
	--v;
if(ee[t]=='D')
	++v;



}
if(h<0)
h=h*-1;
if(v<0)
v=v*-1;
cout<<n-(h+v);












}