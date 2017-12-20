#include <bits/stdc++.h>
using namespace std;

int cyk=0,self=0,zz;
int check[200005]={0};
vector<int > arr[200005];
void DFS(int start)
{
if(check[start]==0)
{ 
	check[start]=1;
for(int e=0;e<arr[start].size();e++)
{

if(arr[start][e]==zz)
	cyk=1;
if(arr[start][e]==start)
	self=1;
if(check[arr[start][e]]==0)
DFS(arr[start][e]);

}
}
}




int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int parent[200005];
for(int e=1;e<=n;e++)
{   
	int g;
	cin>>g;
	parent[e]=g;
	arr[g].push_back(e);
}
cyk=0;
vector<int > vv;
vector<int > ww;
int mk=0;
for(int t=1;t<=n;t++)
{    self=0;
	cyk=0;
	zz=t;
	if(check[t]==0)
DFS(t);
if(cyk==1)
{	vv.push_back(t);
	 
    if(self==1  )
      mk=t;
}
}
//<<vv.size();
if(mk==0)
{
for(int t=1;t<vv.size();t++)
{
parent[vv[t]]=vv[0];
}
parent[vv[0]]=vv[0];
}
else
{
for(int e=0;e<vv.size();e++)
{
if(mk!=vv[e])
	parent[vv[e]]=mk;


}

}

if(mk==0)
{
cout<<vv.size()<<endl;
for(int e=1;e<=n;e++)
	cout<<parent[e]<<" ";


}

else
{
cout<<vv.size()-1<<endl;
for(int e=1;e<=n;e++)
	cout<<parent[e]<<" ";




}






}








 