#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int > arr[9999];
int store[999][999]={0};
int check[9999]={0};
int l;
int h=0;
void DFS(int start)
{ //cout<<start<<endl;
l=start;
for(int f=0;f<arr[start].size();f++)
{
if(check[arr[start][f]]==0)
{
check[arr[start][f]]=1;
h=h+store[start][arr[start][f]];
DFS(arr[start][f]);
}
}
}









int main()
{

 

int n;
cin>>n;
int pier=0;
for(int t=1;t<=n;t++)
{
int a,b,c;
cin>>a>>b>>c;
arr[a].push_back(b);
arr[b].push_back(a);
store[a][b]=c;
pier=pier+c;
}
check[1]=1;
DFS(1);
h=h+store[l][1];
int ans=min(h,pier-h);
cout<<ans;
}








 