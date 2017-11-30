#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 long long int store[999999];
 vector<long long int> arr;
 void build(long long int x,long long int start,long long int stop,long long int l)
 {
long long int mid=(start+stop)/2;
if(start==stop)
	store[x]=arr[start];
else
{
	long long int h;
	if(l==0)
		h=1; else h=0;
build(2*x,start,mid,h);
build(2*x+1,mid+1,stop,h);
if(l==0)
store[x]=store[2*x]|store[2*x+1];
else
store[x]=store[2*x]^store[2*x+1];

}
 
 }

 void update(long long int pos,long long int value,long long int x,long long int start,long long int stop,long long int l)
 {
 	long long int h;
long long int mid=(start+stop)/2;
if(start==stop && start==pos)
	store[x]=value;
else
{
if(l==0)
		h=1; else h=0;
if(pos<=mid)
	update(pos,value,2*x,start,mid,h);
else
	update(pos,value,2*x+1,mid+1,stop,h);
if(l==0)
store[x]=store[2*x]|store[2*x+1];
else
store[x]=store[2*x]^store[2*x+1];}
}

int main()
{
long long int n,l;
cin>>n;
long long int p=pow(2,n);
long long int q;
cin>>q;
arr.push_back(7);
for(long long int t=1;t<=p;t++)
{
long long int z;
cin>>z;
arr.push_back(z);
}
if(n%2==0)
l=1;
else
	l=0;


build(1,1,p,l);
for(int h=1;h<=q;h++)
{

long long int pos,value;
cin>>pos>>value;
 

update(pos,value,1,1,p,l);
cout<<store[1]<<endl;

}
}






 