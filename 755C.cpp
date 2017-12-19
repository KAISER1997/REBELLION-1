#include <bits/stdc++.h>
using namespace std;
int parent[11111]={0};


int fp(int i)
{

if(parent[i]==0)
	return(i);
else
	return(fp(parent[i]));

}

void unionz(int a,int b)
{
int p1=fp(a);
int p2=fp(b);
if(p1!=p2)
parent[p2]=p1;
}


int main()
{

int n;
cin>>n;

for(int r=1;r<=n;r++)
{
	int z;
	cin>>z;
unionz(r,z);
}
set<int > store;
for(int e=1;e<=n;e++)
store.insert(fp(e));


cout<<store.size();





}