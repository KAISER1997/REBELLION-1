#include <bits/stdc++.h>
using namespace std;

int recur(string s,int z,int total)
{
if(s.length()==1)
	return(z);
int arr[10]={0};
for(int r=0;r<s.length();r++)
{
int t=s[r]-48;

if((total-t)%3==0 && arr[t]==0 && arr[3]==0 && arr[6]==0 && arr[9]==0)
{
	arr[t]=1;
 string f=s,zp;
 s.erase(s.begin()+r);
 zp=f;
 f=s;
 s=zp;


int e=recur(f,z*-1,total-t);
if(e==z)
return(z);
}
}
return(z*-1);

}

int main()
{

int d;
cin>>d;
for(int e=1;e<=d;e++)
{
string s;
cin>>s;
int total=0;
for(int r=0;r<s.length();r++)
	total+=s[r]-48;
int l=recur(s,1,total);
if(l==1)
printf("Case %d: S\n",e);
else
printf("Case %d: T\n",e);


}





}