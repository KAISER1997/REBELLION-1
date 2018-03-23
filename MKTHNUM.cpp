#include <bits/stdc++.h>
using namespace std;
vector<int > x[9999999];
vector<int > arr;
int eag[99999999]={0};
bool fire(int a,int b)
{
	return(eag[a]<eag[b]);
}

void build(int z,int start,int stop)
{
	int mid=(start+stop)/2;
if(start==stop)
	x[z].push_back(arr[start]);

else
{
build(2*z,start,mid);
build(2*z+1,mid+1,stop);
 merge(x[2*z].begin(), x[2*z ].end(),
         x[2*z+1].begin(), x[2*z+1].end(),
          back_inserter(x[z]));
}
}

int query(int p,int start,int stop,int qst,int qsp,int k)
{
int mid=(start+stop)/2;
if(start==stop)
return(arr[start]);
int r1=upper_bound(x[2*p].begin(),x[2*p].end(),qsp)-x[2*p].begin();
int l1=lower_bound(x[2*p].begin(),x[2*p].end(),qst)-x[2*p].begin();
 if(r1-l1<0)
 	{r1=l1;}
  if(r1-l1>=k)
	return(query(2*p,start,mid,qst,qsp,k));
else
	return(query(2*p+1,mid+1,stop,qst,qsp,k-(r1-l1)));



}
int main()
{

int n,q;
cin>>n>>q;
arr.push_back(-1);
for(int e=1;e<=n;e++)
{
	int b;
	cin>>b;
arr.push_back(e);
eag[e]=b;
}
sort(arr.begin()+1,arr.end(),fire);
build(1,1,n);
for(int t=1;t<=q;t++)
{
int a,b,k;
cin>>a>>b>>k;
int l=query(1,1,n,a,b,k);
cout<<eag[l]<<endl;


}

}