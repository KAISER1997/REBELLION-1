#include <bits/stdc++.h>
using namespace std;
int main()
{
string str[111111];
int n;
cin>>n;
string eva="";
for(int e=0;e<n;e++)
	cin>>str[e];
int q=str[0].length();
for(int t=0;t<q;t++)
{  
	char w='*';
	int e=0;
for(int f=0;f<n;f++)
{
if(str[f][t]!='?' )
{
if(w=='*' || str[f][t]==w)
w=str[f][t];
else
e=7;
}
}
if(e==0)
{   char z;
	if(w=='*')
     z='x';
    else
     z=w;
 eva+=z;
}
else
eva+='?';
}



cout<<eva;

}




 