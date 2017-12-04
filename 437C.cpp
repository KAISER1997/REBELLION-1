#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{


long long int n,edges;
cin>>n>>edges;
vector<long long int > arr[99999];
long long int a,b;
long long int  check[99999]={0};
long long int deg[9999]={0};
long long int value[9999]={0};
long long int store[9999]={0};
long long int total=0;

for(long long int f=1;f<=n;f++)
	cin>>value[f];




for(int u=1;u<=edges;u++)
{
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
deg[a]=deg[a]+1;
deg[b]=deg[b]+1;
}
vector<pair<long long int ,long long int > >vv;
long long int jj[99999]={0};
for(long long int t=1;t<=n;t++)
{
    for(long long int e=0;e<arr[t].size();e++)
      {
      store[t]=store[t]+value[arr[t][e]];
      //jj[t]=store[t];
        
      }
  jj[t]=store[t];
// store[t]=store[t]-deg[t]*value[t];
 vv.push_back(make_pair(value[t],t));

}

// for(int g=1;g<=n;g++)
// cout<<store[g]<<endl;
sort(vv.begin(),vv.end());
 
for(long long int j=1;j<n;j++)
{  
	long long int ff=vv[n-1].second;
	//cout<<ff;

	if(check[ff]==0)
	{
	//cout<<jj[vv[0].second]<<" "<<vv[0].second<<endl;
 //cout<<vv[n-1].first<<endl;
 vv[n-1].first=-99999999;
 
 
check[ff]=1;
for(long long int u=0;u< arr[ff].size();u++)
{        if(check[arr[ff][u]]==0)
	{    
	   //store[arr[ff][u]]=store[arr[ff][u]]-value[ff];//+value[arr[ff][u]]; 
	 total=total+value[arr[ff][u]];
 // jj[arr[ff][u]]= jj[arr[ff][u]]-value[ff];
 }

}
 
sort(vv.begin(),vv.end());
 

}
else
{
vv[n-1].first=-99999999;
sort(vv.begin(),vv.end());


}
}

cout<<total;





}










 