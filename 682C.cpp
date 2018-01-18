#include <bits/stdc++.h>
using namespace std;
vector<int > arr[111111];
int store[111111]={0};
int value[111111]={0};
int check[111111]={0};
int check2[111111]={0};
int parent[111111]={0};
vector<int > ww;
map<int,map<int ,int > >mp;
void DFS(int start,int val)
{

	if(check2[start]==0)
	{  //cout<<start<<" "<<val<<endl;
		check2[start]=1;
if(val>=0)
store[start]=val;
else
store[start]=0;
//cout<<start<<" "<<store[start]<<endl;
if(store[start]>value[start])
	ww.push_back(start);
for(int e=0;e<arr[start].size();e++)
{
    if(check2[arr[start][e]]==0)
	{
        parent[arr[start][e]]=start;
		DFS(arr[start][e],store[start]+mp[start][arr[start][e]]);


	}


}
}
}
int u=0;
void DFS2(int start)
{
	if(check[start]==0 )
		{check[start]=1;
for(int e=0;e<arr[start].size();e++)
	
	{   if(arr[start][e]!=parent[start])
		DFS2(arr[start][e]);

	}

++u;

}
}

int main()
{
int n;
cin>>n;
for(int e=1;e<=n;e++)
	cin>>value[e];
for(int e=1;e<=n-1;e++)
{
int a,b;
cin>>a>>b;
arr[e+1].push_back(a);
arr[a].push_back( e+1 );
mp[a][e+1]=b;
mp[e+1][a]=b;
}
 DFS(1,0);
//cout<<ww.size();
for(int e=0;e<ww.size();e++)
{
	//cout<<ww[e];
if(check[ww[e]]==0)
	DFS2(ww[e]);


}



cout<<u;



}