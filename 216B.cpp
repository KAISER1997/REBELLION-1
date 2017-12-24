#include <bits/stdc++.h>
using namespace std;

int cy=0;
int size=0;
int check[9999]={0};
int root;
vector<int > arr[9999];
int parent[9999]={0};
void DFS(int start)
{
if(check[start]==0)
{
	++size;
check[start]=1;
for(int e=0;e<arr[start].size();e++)
{
if(arr[start][e]==root && arr[start][e]!=parent[start])
	cy=1;
if(check[arr[start][e]]==0)
	parent[arr[start][e]]=start;
DFS(arr[start][e]);
}
}
}


int main()
{
int n,edges;
cin>>n>>edges;

for(int e=1;e<=edges;e++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
}
int l=0,r=0;
int ans=0;
for(int r=1;r<=n;r++)
{
	size=0;
	root=r;
	cy=0;
if(check[r]==0)
{
DFS(r);
//cout<<cy<<endl;
if(cy==1 && size%2==1)
	++ans;
if(cy==0 && size%2==1)
	++l;
//cout<<r<<" "<<ans<<endl;
}
}
//cout<<ans;
if(l%2==0)
	cout<<ans;
else
	cout<<ans+1;




}



 