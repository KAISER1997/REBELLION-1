#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> arr[100001];
int store[100001]={0};
int value[100001]={0};
int below[100001]={0};
int check[100001]={0};
int parent[100001]={0};
void DFS(int start)
{
if(check[start]==0)
{


	check[start]=1;
	int u=0;
	int q=0;
	set<int> ss;
	for(int t=0;t<arr[start].size();t++)
	{	
       if(check[arr[start][t]]==0)
       { ++q;
       	parent[arr[start][t]]=start;
		DFS(arr[start][t]);
        if(store[arr[start][t]]==-1)
        	{store[start]=-1;
        		u=1;

       }
       ss.insert(value[arr[start][t]]);



}
}
if(q==0)
store[start]=0;
else
{
if(u==0 && ss.size()==1 && *(ss.begin())==value[start])
{store[start]=0;
//cout<<(*ss.begin());

}
else
store[start]=-1;

}

}
}

int main()
{
int n;
cin>>n;
int a,b;
vector<int > l;
vector<int > r;


for(int t=1;t<n;t++)
{
cin>>a>>b;
l.push_back(a);
r.push_back(b);
arr[a].push_back(b);
arr[b].push_back(a);
}
int d=0;
for(int e=1;e<=n;e++)
	cin>>value[e];
 a=0;
 b=0;
 for(int t=0;t<l.size();t++)
 {
if(value[l[t]]!=value[r[t]])
{


	a=l[t];
	b=r[t];
	break;
}
 }
 int f,k;
 int r1=0,r2=0;
if(a!=0 && b!=0)
{

DFS(a);
for(int p=0;p<arr[a].size();p++)
	if(store[arr[a][p]]==-1)
		r1=1;
for(int er=1;er<=n;er++)
{

	check[er]=0;
	store[er]=0;
}
DFS(b);
for(int p=0;p<arr[b].size();p++)
	if(store[arr[b][p]]==-1)
		r2=1;





} 
if(a==0 && b==0 )
	cout<<"YES"<<endl<<"1";
else if(r1==0)
	cout<<"YES"<<endl<<a;
else if(r2==0)
	cout<<"YES"<<endl<<b;
else
	cout<<"NO";
}


 
 