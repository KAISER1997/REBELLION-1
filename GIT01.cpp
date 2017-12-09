#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int cases;
cin>>cases;
for(int u=1;u<=cases;u++)
{



 int m,n;
 cin>>m>>n;
 string word[9999];
 for(int t=1;t<=m;t++)
 	cin>>word[t-1];
int a=0,b=0;
 for(int x=0;x<m;x++)
 {
 for(int y=0;y<n;y++)
 {
if(((x+y)%2)==0 && word[x][y]=='G')
a=a+3;
if(((x+y)%2)!=0 && word[x][y]=='R')
a=a+5;

if(((x+y)%2)==0 && word[x][y]=='R')
b=b+5;
if(((x+y)%2)!=0 && word[x][y]=='G')
b=b+3;
}
}
cout<<min(a,b)<<endl;

}
}