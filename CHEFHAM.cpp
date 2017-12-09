#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

int cases;
cin>>cases;
for(int u=1;u<=cases;u++)
{
map<int ,int > mp;
int n;
cin>>n;
vector<pair <int,int > > arr;
vector<int >jj;
for(int u=0;u<n;u++)
{
int g;
cin>>g;
arr.push_back(make_pair(g,u));
jj.push_back(g);
}

sort(arr.begin(),arr.end());

int t=0;
if(n>2)
for(int e=2;e<n;e++)
{
   int l=arr[e-2].first;
   int m=arr[e].second;
   mp[m]=l;
   if(mp[m]!=jj[m]) ++t;

   if(e==n-1)
   {

int l1=arr[1].first;
int r1=arr[1].second;
int l2=arr[0].first;
int r2=arr[0].second;
mp[r1]=arr[n-1].first;
mp[r2]=arr[n-2].first;
if(mp[r1]!=jj[r1])
	++t;
if(mp[r2]!=jj[r2])
	++t;




   }
}
else
{

for(int e=0;e<n;e++)
{
   int l=arr[n-e-1].first;
   int m=arr[e].second;
   mp[m]=l;
   if(mp[m]!=jj[m]) ++t;
}



}






cout<<t<<endl;
for(int e=0;e<n;e++)
{
   cout<<mp[e]<<" ";
   }
   cout<<endl;
}






}