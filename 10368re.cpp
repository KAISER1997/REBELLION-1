#include <bits/stdc++.h>
using namespace std;
long long int DFS(long long int a,long long int b,long long int z)
{
long long int mint=min(a,b);
long long int maxt=max(a,b);


if(maxt%mint==0)
		return(z);
	long long int vz=z;
	//for(long i=big/small; i>=1; i--)
for(long long int e=maxt/mint;e>=1;e--)
{

long long int q=DFS(maxt-(mint*e),mint,z*-1);
if(q==vz)
	return(q);

}
return(vz*-1);
}


int main()
{
long long int a,b;
while(1!=0)
{

	

 
cin>>a>>b;
if(a==0 && b==0)
break;
 
 
long long int xx=DFS(a,b,1);

if(xx==1)
	cout<<"Stan wins"<<endl;
else
	cout<<"Ollie wins"<<endl;



}
}






