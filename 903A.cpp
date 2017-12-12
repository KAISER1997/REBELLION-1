#include <bits/stdc++.h>
using namespace std;
int main()
{



int cases,c;
cin>>cases;
for(int y=1;y<=cases;y++)
{
cin>>c;


int f=0;

for(int e=0;e<=c;e=e+7)
{
if(((c-e)%3)==0)
	f=1;
}

if(f==1)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
}














}