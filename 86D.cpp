#include <bits/stdc++.h>
using namespace std;
 
struct node
{
  int a;
  int b;
  int c;
};

  int n;
  int sq;

bool fire(struct node a1,struct node a2)
{
if(a1.a/sq!=a2.a/sq)
	return(a1.a<a2.a);
else
	return(a1.b<a2.b);

}








int main()
{

ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//int ans[1111111]={0};
vector<  int > arr;
  int query;
 
scanf("%d %d",&n,&query);
sq=sqrt(n);
for(  int t=0;t<n;t++)
 {
  int j;
scanf("%d",&j);
arr.push_back(j);
}
vector< struct node > qq;

for( int u=0;u<query;u++)
{
struct node x;
scanf("%d %d",&x.a,&x.b);
x.a=x.a-1;
x.b=x.b-1;
x.c=u;
qq.push_back(x);
}

sort(qq.begin(),qq.end(),fire);
int mp[1111111]={0};
// long long int l=0;
// long long int r=-;
// for(int e=0;e<query;e++)
// {
// cout<<qq[e].a<<" "<<qq[e].b<<endl;
// }
long long int kk[1111111]={0};
float sz=1;
long long int p=0;
  int u=0;
 int v=-1;
for(  int f=0;f<query;f++)
{
  int k,l,m;
k=qq[f].a; l=qq[f].b; m=qq[f].c;
  //cout<<k<<" "<<l;

 
 while(v<l)
 {
++v;
mp[arr[v]]+=1;
if(mp[arr[v]]!=1)
p=p+arr[v]*((mp[arr[v]]*mp[arr[v]])-((mp[arr[v]]-1)*(mp[arr[v]]-1)));
else
p=p+arr[v];
 }
 while(u<k)
 {
mp[arr[u]]-=1;
if(mp[arr[u]]==0)
{
p=p-arr[u];
}
else
{
p=p+arr[u]*((mp[arr[u]]*mp[arr[u]])-((mp[arr[u]]+1)*(mp[arr[u]]+1)));
}
++u;
 }

 while(u>k)
 {

mp[arr[u-1]]+=1;
if(mp[arr[u-1]]!=1)
p=p+arr[u-1]*((mp[arr[u-1]]*mp[arr[u-1]])-((mp[arr[u-1]]-1)*(mp[arr[u-1]]-1)));
else
p=p+arr[u-1];
--u;

 }

 while(v>l)
 	 {
mp[arr[v]]-=1;
if(mp[arr[v]]==0)
{
p=p-arr[v];
}
else
{
p=p+arr[v]*((mp[arr[v]]*mp[arr[v]])-((mp[arr[v]]+1)*(mp[arr[v]]+1)));
}
--v;
 }
 kk[m]=p;
}


for( int y=0;y<query;y++)
	cout<<kk[y]<<endl;



}

