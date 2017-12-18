#include <bits/stdc++.h>
using namespace std;
 vector <int>arr[200090];
 int colour[200090]={0};
 int check[200090]={0};
 int maxx=-1;
 int nodes=0;
 map<int ,int > col;
void DFS(int start)
{

if(check[start]==0)
{
	++nodes;
	col[colour[start]]+=1;
	maxx=max(maxx,col[colour[start]]);
check[start]=1;



for(int u=0;u<arr[start].size();u++)
	
	{
        if(check[arr[start][u]]==0)
		DFS(arr[start][u]);


	}


}
}


int main()

{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,cnn,days,total=0;
cin>>n>>days>>cnn;
for(int e=1;e<=n;e++)
cin>>colour[e];


 
for(int t=1;t<=days;t++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);

}

for(int e=1;e<=n;e++)
{

if(check[e]==0)
{
	 
DFS(e);
total+=nodes-maxx;
maxx=-1;
nodes=0;
col.clear();
}

}
cout<<total;













}