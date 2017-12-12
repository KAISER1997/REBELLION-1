#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

map<int ,int > mp;
int a,b,c,f=-1;
cin>>a>>b>>c;
 int j=0;
while(a!=0)
{
a=a*10;
while(a<b)

{
a=a*10;
++j;
if(c==0)
{

f=j;
break;	
}
}
if(f!=-1)
break;
mp[a]+=1;
 
if(mp[a]==2  )
{

//cout<<a/b;

	break;


}
++j;
if((a/b)==c)
{
   f=j;
	break;


}

a=a%b;
mp[a]+=1;
if(mp[a]==2)
	break;

 
}
if(f==-1 && a==0 && c==0)
{cout<<j+1;

}
else 
cout<<f;
}