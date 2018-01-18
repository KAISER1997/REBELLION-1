#include <bits/stdc++.h>
using namespace std;
int  la,lb;
int h[101][101][11][11]={0};
int mod=100000000 ;
int recur(int a,int b,int sa,int sb,int z)
{
 if(h[a][b][sa][sb]!=-1 )
	  	return(h[a][b][sa][sb]);
	if(a==0 && b==0)
		return(1);
	int x=0,y=0;
if(sa<la && a>0)
  x=recur(a-1,b,sa+1,0,1);
if(sb<lb && b>0)
  y=recur(a,b-1,0,sb+1,2);
 


return(h[a][b][sa][sb]=(x+y)%mod);


}

int main()
{
int a,b;
  for(int e=0;e<101;e++)
 	for(int e1=0;e1<101;e1++)
 		for(int e2=0;e2<11;e2++)
  			for(int e3=0;e3<11;e3++)
 				h[e][e1][e2][e3]=-1;


cin>>a>>b>>la>>lb;
int ans=recur(a,b,0,0,0)%100000000 ;


cout<<ans;


}