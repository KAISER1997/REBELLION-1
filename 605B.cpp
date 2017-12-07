#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<pair<long long int ,long long int > > tre;
vector<pair<long long int ,long long int > > ntree;
vector<long long int > arr[111111];
map<long long int ,long long int > mp;
long long int vertices;
long long int edges,uva=0;
cin>>vertices>>edges;
long long int loan[111111]={0};
for(long long int t=1;t<=edges;t++)
{
	if(t>2)
		loan[t]=t-2;
long long int wt,ck;
cin>>wt>>ck;
if(ck==1)
	tre.push_back(make_pair(wt,t));
else
	ntree.push_back(make_pair(wt,t));


}
sort(tre.begin(),tre.end());
sort(ntree.begin(),ntree.end());
if(tre.size()!=vertices-1)
	uva=1;
long long int store[111111]={0};

for(long long int t=2;t<=vertices;t++)

{store[t]=tre[t-2].first;
	long long int u=tre[t-2].second;
	arr[u].push_back(t-1);
	arr[u].push_back(t);


}
long long int node=3;
long long int f=0;
long long int size=ntree.size();
if(size!=0)
 for(long long int t=3;t<=vertices;t++)
 {

for(long long int fw=1;fw<=loan[node];fw++)
{
 long long int l,r;
 l=ntree[f].first; r=ntree[f].second;
 if(store[node]>l)
 {
uva=1;
break;
 }  
 else{

arr[r].push_back(fw);
arr[r].push_back(node);

 	++f;
 }                                


if(f==size)
	break;
                                       
}

++node;
if(f>=size || uva==1)
	break;

}

if(uva==1 || f!=size)
	cout<<"-1";
else
	for(long long int m=1;m<=edges;m++)
	{

       cout<<arr[m][0]<<" "<<arr[m][1]<<endl;



	}








}