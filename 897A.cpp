#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,q;
cin>>n>>q;
string s;
cin>>s;
s=s;
for(int z=1;z<=q;z++)
{
int a,b;
char x,yj;
cin>>a>>b>>x>>yj;
for(int y=a-1;y<=b-1;y++)
{
if(s[y]==x)
	s[y]=yj;
}
}


cout<<s;

}