#include <bits/stdc++.h>
using namespace std;
int diroot[222222]={0};
int check[222222]={0};
int check2[222222]={0};
vector<int > arr[222222];
int maxx=-1;
void DFS(int start,int d)
{
if(check[start]==0)
{
diroot[start]=d;
check[start]=1;
for(int u=0;u<arr[start].size();u++)
	DFS(arr[start][u],d+1);
}
}

void DFS2(int start,int d)
{

if(check2[start]==0 && d<diroot[start])
{
check2[start]=1;
 maxx=max(maxx,diroot[start]*2);
for(int u=0;u<arr[start].size();u++)
	DFS2(arr[start][u],d+1);


}



}

int  main()
{
int n,x,a,b;
cin>>n>>x;
for(int e=1;e<n;e++)
{
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
}
DFS(1,0);
DFS2(x,0);
cout<<maxx;




}