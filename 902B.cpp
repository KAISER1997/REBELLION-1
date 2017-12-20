#include <bits/stdc++.h>
using namespace std;

vector<int > arr[11111];
int colour[11111]={0};
int check[11111]={0};
 
int parent[11111]={0};
int cv[11111]={0};
int t=0;

void DFS2(int start,int check2[11111],int color)
{

if(check2[start]==0)
{
check2[start]=1;
cv[start]=color;
for(int i=0;i<arr[start].size();i++)
{
if(arr[start][i]!=parent[start])
	DFS2(arr[start][i],check2,color);

}




}




}












void DFS(int start)
{

if(check[start]==0)
{
if(cv[start]!=colour[start])
	{
         int check2[11111]={0};
		DFS2(start,check2,colour[start]);

++t;
	}

check[start]=1;
for(int u=0;u<arr[start].size();u++)
{
if(check[arr[start][u]]==0)
{
	parent[arr[start][u]]=start;
DFS(arr[start][u]);



}


}



}

}

 







int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;

for(int e=2;e<=n;e++)
{
	int j;
cin>>j;
arr[e].push_back(j);
arr[j].push_back(e);
//cout<<e<<" "<<j<<endl;
}
for(int j=1;j<=n;j++)
	cin>>colour[j];

DFS(1);
cout<<t;














}