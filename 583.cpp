#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long int >prime;
void sieve(long long int up)
{

bool arr[up+1]={0};
arr[0]=1;
arr[1]=1;
for(long long int g=2;g<=up;g++)
{

if(arr[g]==0)
{
prime.push_back(g);
for(long long int f=g+1;f<=up;f++)
	if(f%g==0)arr[f]=1;

}
}
}
int main()
{
 sieve(50000);
 //cout<<prime.size();
 long long int n;

while(cin>>n)
{
	if(n==0)
		break;
long long int ck=0;
 
long long int op;
 
 
op=n;
if(n<0) {ck=-1;
n=n*-1;

}
else ck=1;
vector<long long int > jj;
 

// for(int r=0;r<=10;r++)
// cout<<prime[r]<<endl;
for(long long int i=0;prime[i]<=n && n>=1 && i<prime.size();i++)
{ 
	//cout<<prime[i]<<endl;
while(n%prime[i]==0 && n>=1)
{
	 //cout<<n<<" "<<prime[i]<<endl;
n=n/prime[i];
jj.push_back(prime[i]);
}

if(n==1)
	break;
if(i==prime.size()-1)
jj.push_back(n);	


}
cout<<op<<" = ";
if(ck==1)
{
for(long long int h=0;h<jj.size();h++)
	{cout<<jj[h];
        if(h!=jj.size()-1)
        	cout<<" x ";
	}
	cout<<endl;
}
else
{
cout<<"-1 x ";
for(long long int h=0;h<jj.size();h++)
	{cout<<jj[h];
        if(h!=jj.size()-1)
        	cout<<" x ";
	}
	cout<<endl;
}




}

}


 














 