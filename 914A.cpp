#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int > arr;
for(int e=1;e<=n;e++)
{
int a;
cin>>a;
arr.push_back(a);

}
int ans;
sort(arr.begin(),arr.end());
for(int p=0;p<arr.size();p++)
{
if(arr[p]>=0)
{
int u=sqrt(arr[p]);
if(u*u!=arr[p])
ans=arr[p];

}
else
ans=arr[p];
}

cout<<ans;





}