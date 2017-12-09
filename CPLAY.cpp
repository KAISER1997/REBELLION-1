#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {

string s;
 while(cin>>s)
 {
int a=0,b=0,u=0,l1=0,l2=0;
int f=0;
for(int t=0;t<10;t++)
{
 if(t%2==0)
 	++l1;
 else
 	++l2;
if(t%2==0 && s[t]=='1')
	{++a;
      

	}
if(t%2==1 && s[t]=='1')
{++b;
 

}
if(	(a-b)>(5-l2))
 {
u=1;
f=l1+l2;
break;
 }
if(	(b-a)>(5-l1))
 {
u=2;
f=l1+l2;
break;
 }

}
int h1=10;
int h2=11;
if(u==0)
{

for(int sx=1;sx<=5;sx++)
{
if(s[h1]!=s[h2])
{
if(s[h1]=='1')
	u=1;
else
	u=2;
f=10+2*sx;
break;




}
else
{
	h1+=2;
	h2+=2;
}
}
}
if(u==0)
	cout<<"TIE"<<endl;
else if(u==1)
	cout<<"TEAM-A "<<f<<endl;
else
	cout<<"TEAM-B "<<f<<endl; 



}

}


























 