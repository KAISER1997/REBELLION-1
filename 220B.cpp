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
int ans[111111]={0};
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
int mp[111111]={0};
// long long int l=0;
// long long int r=-;
// for(int e=0;e<query;e++)
// {
// cout<<qq[e].a<<" "<<qq[e].b<<endl;
// }
int kk[111111]={0};
 int size=0;
  int u=0;
 int v=-1;
for(  int f=0;f<query;f++)
{
  int k,l,m;
k=qq[f].a; l=qq[f].b; m=qq[f].c;
  //cout<<k<<" "<<l;

while(k>u )
{
	if(arr[u]<=n)
	{
mp[arr[u]]-=1;
if(mp[arr[u]]==arr[u] && arr[u]<=n)
{kk[arr[u]]=1;
++size;

}
if(mp[arr[u]]==(arr[u]-1) && arr[u]<=n)
{kk[arr[u]]=0;
--size;

}
}
++u;
}

while(u>k)
{
 
if(arr[u-1]<=n)
{ mp[arr[u-1]]+=1;
if(mp[arr[u-1]]==arr[u-1]  && arr[u-1]<=n)
{kk[arr[u-1]]=1;
++size;
}
if(mp[arr[u-1]]==(arr[u-1]+1)   && arr[u-1]<=n)
{kk[arr[u-1]]=0;
--size;

}
}


--u;
 
}

while(v<l)
{
	++v;
	if(arr[v]<=n)
	{
mp[arr[v]]+=1;
if(mp[arr[v]]==arr[v]  && arr[v]<=n)
{kk[arr[v]]=1;
	++size;


}
if(mp[arr[v]]==(arr[v]+1)    && arr[v]<=n)
{ kk[arr[v]]=0;
	--size;}
 
} 
}


while(l<v)
{
	if(arr[v]<=n)
	{
mp[arr[v]]-=1;
if(mp[arr[v]]==arr[v]    && arr[v]<=n)
{kk[arr[v]]=1;
	++size;


}
if(mp[arr[v]]==(arr[v]-1)    && arr[v]<=n)
{ kk[arr[v]]=0;
	--size;}
 
 }

--v;
}


ans[m]=size;
// for(set <int > :: iterator it=kk.begin();it!=kk.end();it++)
// cout<<*it<<" ";
// for(int e=1;e<=3;e++)
// cout<<mp[e]<<" ";
//cout<<endl;
 
}


for( int y=0;y<query;y++)
	printf("%d\n",ans[y]);

















}
