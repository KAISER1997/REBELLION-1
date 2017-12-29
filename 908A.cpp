#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int u=0;
for(int t=0;t<s.length();t++)
{
int q=s[t]-48;
if(s[t]=='a' || s[t]=='e' || s[t]=='i' || s[t]=='o' || s[t]=='u' || s[t]=='1' || s[t]=='3' || s[t]=='5' || s[t]=='7' || s[t]=='9')
	++u;
 


}

cout<<u;


}