#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int > arr[9999];
void DFS(int start,int check[])
{
if(check[start]==0)
{
check[start]=1;
for(int t=0;t<arr[start].size();t++)
DFS(arr[start][t],check);
}
}


int main()
{
int n;
	cin>>n;
	vector< pair <int,int> >vv;
	vv.push_back(make_pair(-1,-1));

for(int t=1;t<=n;t++)
{
int c,a,b;
cin>>c>>a>>b;
if(c==1)
{

for(int r=1;r<vv.size();r++)
{
int s1,s2;
s1=vv[r].first;s2=vv[r].second;
if((a>s1 && a<s2) || (b>s1 && b<s2))
	{arr[vv.size()].push_back(r);

 // cout<<vv.size()<<" "<<r<<endl;

	}
if((a<s1 && s1<b) || (s2>a && s2<b))
{	arr[r].push_back(vv.size());
//cout<<r<<" "<<vv.size()<<endl;

}

}


vv.push_back(make_pair(a,b));
}

else
{
int check[9999]={0};
DFS(a,check);
if(check[b]==0)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;


}

}

}