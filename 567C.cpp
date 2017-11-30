#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	vector<long long int> arr;
long long int n,b,zeros=0;
map<long long int,long long int > war;
 set<long long int >jj;
cin>>n>>b;
for(long long int t=1;t<=n;t++)
{

long long int x;
cin>>x;
++war[x];
jj.insert(x);
if(x!=0)
 arr.push_back(x);
else
	++zeros;

}

 
map<long long int,long long int > store;

map<long long int,long long int >total;
long long int final=0;
 
for(long long int t=0;t<arr.size();t++)
{ 
 
++store[arr[t]];
if(store[arr[t]/b]!=0   && arr[t]%b==0)
	total[arr[t]]+=store[arr[t]/b];
if( store[arr[t]/b]!=0 && store[arr[t]/(b*b)]!=0 && b!=1 && arr[t]%b==0 && arr[t]%(b*b)==0)
	final=final+total[arr[t]/b];



}
if(b!=1)
{
if(zeros>=3)
	{
		long long int p=zeros;
    final=final+((p)*(p-1)*(p-2))/6;}


	cout<<final;


}

else
{
for(set<long long int> :: iterator it=jj.begin();it!=jj.end();it++)
{
    if(war[*it]>=3)
    {

 long long int p=war[*it];
    final=final+((p)*(p-1)*(p-2))/6;
    }



}



cout<<final;



}














}