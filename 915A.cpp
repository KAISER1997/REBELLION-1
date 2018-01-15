#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,len,ans;
cin>>n>>len;
vector<int > arr;
for(int t=0;t<n;t++)
{
int u;
cin>>u;
arr.push_back(u);
}
sort(arr.begin(),arr.end());
for(int e=0;e<arr.size();e++)
{
if(len%arr[e]==0)
	ans=arr[e];


}
cout<<len/ans;








}