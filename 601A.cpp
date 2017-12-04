#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
void BFS(vector <int> arr[999],int store[999])
{
queue<int>qq;
store[n]=1;
qq.push(n);
while(!qq.empty())
{
int l=qq.front();
qq.pop();

int j=store[l];


for(int t=0;t<arr[l].size();t++)
{
if(store[arr[l][t]]==0)
{
store[arr[l][t]]=j+1;
qq.push(arr[l][t]);
}
}
}
}


 int main()
{
queue <pair<int,int > >zz;
vector<int> arr[999];
vector<int> brr[999];
int war[999][999]={0};
int edges;
cin>>n>>edges;
for(int t=1;t<=edges;t++)
{
int a,b;
cin>>a>>b;
war[a][b]=1;
war[b][a]=1;

arr[a].push_back(b);
arr[b].push_back(a);
}

for(int t=1;t<=n;t++)
{
for(int y=1;y<=n;y++)
{
if(t!=y && war[t][y]==0)
{
	brr[t].push_back(y);
	brr[y].push_back(t);
}
}
}
int store1[999]={0},store2[999]={0};
BFS(arr,store1);

BFS(brr,store2);

zz.push(make_pair(1,1));
int jo1[999]={0},jo2[999]={0};
jo1[1]=1;
jo2[1]=1;
int r1=0,r2=0;
int u1=0,u2=0;
 int uu=-1;
// for(int u=n;u>=1;u--)
// 	cout<<store1[u]<<" "<<store2[u]<<endl;

 
while(!zz.empty())

{  
	int f1=zz.front().first;
	int f2=zz.front().second;
 //cout<<f1<<" "<<f2<<endl;
	zz.pop();
	vector<int >t1;
		vector<int >t2;
	int l1=jo1[f1];
	int l2=jo2[f2];
	for(int e=0;e<arr[f1].size();e++)
	{

if(jo1[arr[f1][e]]==0)
{
jo1[arr[f1][e]]=l1+1;
t1.push_back(arr[f1][e]);
}

	}

 	for(int e=0;e<brr[f2].size();e++)
	{
if(jo2[brr[f2][e]]==0)
{
jo2[brr[f2][e]]=l2+1;
t2.push_back(brr[f2][e]);
}
   }

//cout<<">>"<<t1.size() <<" "<<t2.size();
for(int h=0;h<t1.size();h++)
{
for(int h1=0;h1<t2.size();h1++)
{

if(t1[h]!=t2[h1]  )
	zz.push(make_pair(t1[h],t2[h1]));

}
}
 if(jo1[n]>0 && jo2[n]>0)
 {
 	//cout<<"SD";
uu=jo1[n]-1;
break;
 }
 else if(jo1[n]>0 && jo2[n]==0)
 {
int mint=9999;
for(int r=0;r<t2.size();r++)
{
if(store2[t2[r]]!=0 )
mint=min(store2[t2[r]],mint);

}
if(mint==9999)
	{

         
		break;


	}
else
	{uu=jo1[n]+mint-2;
break;

	}
 }
 else if(jo1[n]==0 && jo2[n]>0)
 {
int mint=9999;
for(int r=0;r<t1.size();r++)
{

if(store1[t1[r]]!=0 )
mint=min(store1[t1[r]],mint);
}
if(mint==9999)
	{

          
		break;

	}
else
	{uu=jo2[n]+mint-2;

break;
	}



 }
}

cout<<uu;
}

