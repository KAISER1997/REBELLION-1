#include <bits/stdc++.h>
using namespace std;


long long int mod=1000000007;
long long int store[2002][2002]={0};
 long long int ncrModp( long long int n, long long int r, long long int p)
 
{
 long long int value[9999]={0};
value[0]=1;
for( long long int e=1;e<=n;e++)
{
	store[e][0]=1;
for( long long int f=e;f>0;f--)
{
value[f]=(value[f]+value[f-1])%p;
 //cout<<value[f]<<" ";
store[e][f]=value[f];
}
 
// cout<<endl;
}
return(value[r]);

}
int bin(long long int n)
{
long long int r=n;
long long int one=0;
while(r!=0)
{
one+=r%2;

r=r/2;


}

return(one);


}





int main()
{
	 
long long int dp[1111]={0};
dp[1]=0;
dp[2]=1;
for(int e=3;e<=1001;e++)
{
long long int k=bin(e);
dp[e]=1+dp[k];
 
}
 
string s;
long long int n;
cin>>s;
cin>>n;
ncrModp(s.length()+1,s.length()+1,mod);
long long int ones=0;

for(int u=0;u<s.length();u++)
{
if(s[u]=='1')
	++ones;

}
int q=s.length()-1;
long long  int qar[1111]={0};
for(int u=1;u<=q;u++)
{
qar[u]=store[q][u];
//cout<<qar[u]<<endl;
}
 long long int u=0,ct=0;
long long int h=0;
long long int t=0;
qar[ones]+=1;
for(int w=q;w>0;w--)
{    

if(s[w]=='1'  )
{



++t;
long long int u=ones-t;
if(w!=q)
for(int h=0;h<=ct;h++)
{
  qar[h+ones-t]+=store[ ct ][h];
  //cout<<h+ones-t<<" "<<w<<" "<<h<<" "<<ct<<" "<<store[ct][h]<<endl;
}
else
{qar[ones-t]+=1;
 //cout<<ones-t<<endl;

}
}
++ct;




}
 long long int ans=0;
for(int p=1;p<s.length();p++)
 if(dp[p]==n-1)
ans+=qar[p]%mod;
if(n==1 && s!="1")
	ans-=1;
if(n!=0)
cout<<ans%mod;
else
cout<<"1";

}