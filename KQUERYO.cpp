#include <bits/stdc++.h>
using namespace std;
vector <int > store[120000];

vector<int > arr;

void build(int x,int start,int stop)
{
	int mid=(start+stop)/2;
if(start==stop)
{	store[x].push_back(arr[start]);
return;
}
else
{
build(2*x,start,mid);
build(2*x+1,mid+1,stop);
merge( store[2 * x].begin(),  store[2 * x].end(),  store[2 * x + 1].begin(),  store[2 * x + 1].end(), back_inserter( store[x]));
}
}

int query(int x,int qst,int qsp,int start,int stop,int ask)
{

	int mid=(start+stop)/2;
if(start>qsp || qst> stop)
	return(0);
if(qst<=start && qsp>=stop)
{
int f=upper_bound(store[x].begin(),store[x].end(),ask)-store[x].begin();
f=store[x].size()-f;
return(f);
}
else
{
int a1=query(2*x,qst,qsp,start,mid,ask);
int a2=query(2*x+1,qst,qsp,mid+1,stop,ask);
return(a1+a2);
}
}

int main()
{

int n;
cin>>n;
arr.push_back(-1);
int last=0;
for(int e=1;e<=n;e++)
{
int j;
cin>>j;
arr.push_back(j);
}

build(1,1,n);
int querye;
cin>>querye;
for(int u=1;u<=querye;u++)
{
int a,b,c,i,j,k;
cin>>a>>b>>c;
i=a^last;
j=b^last;
k=c^last;
if(i<1) i=1;
if(j>n) j=n;
if(i>j)
{
last=0;
cout<<last<<endl;
continue;

}
last=query(1,i,j,1,n,k);
cout<<last<<endl;


}
}











