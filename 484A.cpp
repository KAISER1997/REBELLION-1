#include <bits/stdc++.h>
using namespace std;

long long int ze=0;
vector<long long int > x;
long long int t=0;
long long int count(long long int n)
{
	long long int e=0;
while(n!=0)
{
++e;
long long int z=n%2;
 
if(z==0){
ze=1;
 
}
else
++t;
n=n/2;
}
return(e);
}

int main()
{
	long long int task;
	cin>>task;
	for(long long int r=1;r<=task;r++)
	{
long long int a,b;
cin>>a>>b;
long long int ca,cb;
long long int zeroa,zerob;
ca=count(a);
zeroa=ze;
ze=0;
cb=count(b);
 
zerob=ze;
//cout<<ca<<" "<<cb<<" "<<zeroa<<" "<<zerob<<endl;
ze=0;
if(a==b)
	cout<<a<<endl;
else if(ca!=cb)
{
if(zerob==0)
	cout<< b<<endl;
else
	cout<<(long long int)pow(2,cb-1)-1<<endl;

}
else
{
long long int w=a^b;
long long int cw=count(w);
 
long long int ju1,ju2 ;
long long int ya=(1<<(cw-1))&a;
long long int yb=(1<<(cw-1))&b;
//cout<<ya<<" "<<yb<<endl;
      
	 ju1=pow(2,cw-1)-1 ;
	 
		ju2=pow(2,cw)-1;
 
//cout<<ju;
long long int k1=a|ju1;
long long int k2=a|ju2;

if(zerob==0  )
cout<<b<<endl;
else if(k2<=b)
cout<<k2<<endl;
else
cout<<k1<<endl;

t=0;

}

}

}