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

int n;
cin>>n;
if(n==2)
cout<<"1";
else if(n%2==0)
cout<<"2";
else
{

sieve(sqrt(20)*10000);
int h=0,z=0;
for(int e=0;prime[e]<=sqrt(n) && e<prime.size();e++)
{
if(n%prime[e]==0)
	++h;

}
if(h!=0)
for(int e=0;prime[e]<=sqrt(n-2) && e<prime.size();e++)
{
if((n-2)%prime[e]==0)
	++z;

}

if(h==0)
	cout<<"1";
else if(z==0)
	cout<<"2";
else 
	cout<<"3";



}




}