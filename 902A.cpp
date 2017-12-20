#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,dis;
cin>>n>>dis;
vector< pair <int ,int > > arr;
for(int e=1;e<=n;e++)
{
int a,b;
cin>>a>>b;
arr.push_back(make_pair(a,b));
}

sort(arr.begin(),arr.end());

int sp=0;
int q=0;
for(int r=0;r<arr.size();r++)
{
	int a,b;
	a=arr[r].first;
	b=arr[r].second;
if(sp>=a && sp<=b)
	sp=b;
if(sp<a)
	q=1;


}
if(q==1 || sp<dis)
cout<<"NO";
else
cout<<"YES";
}






