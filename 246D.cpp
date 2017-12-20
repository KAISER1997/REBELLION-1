#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int > arr[111111];
vector<int > cd[111111];
map<int ,set<int > >ll;
 
int colour[111111]={0};
int n,edges,f;
cin>>n>>edges;
set<int> k;
for(int y=1;y<=n;y++)
{
cin>>colour[y];
cd[colour[y]].push_back(y);
k.insert(colour[y]);
}

for(int t=1;t<=edges;t++)
{ 
	int a,b;
	cin>>a>>b;
	arr[a].push_back(b);
	arr[b].push_back(a);




}










int total[111111]={0};
for(set <int> :: iterator it=k.begin();it!=k.end();it++)
{
int h=*it;
for(int e=0;e<cd[h].size();e++)
{
for(int m=0;m<arr[cd[h][e]].size();m++)
	if(colour[arr[cd[h][e]][m]]!=h)
		ll[h].insert(colour[arr[cd[h][e]][m]]);

}


}
int maxx=-2;
for(set<int > :: iterator it=k.begin();it!=k.end();it++)
{ 

	int g=ll[*(it)].size();
	//cout<<*it<<" "<<g<<endl;
maxx=max(maxx, g);



}

for(set<int > :: iterator it=k.begin();it!=k.end();it++)
{ 

	int g=ll[*(it)].size();
if(g==maxx)
{

	cout<<*it;
	break;
}



}


 
}