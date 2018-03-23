#include <bits/stdc++.h>
using namespace std;

 
map<int ,map<int,int > >mp;
map<int ,map<int , vector< int > > > war;

vector<int > arr;
int hj=-1;
void build(int x,int start,int stop)
{
	hj=max(hj,x);
	int mid=(start+stop)/2;
if(start==stop)
mp[1][x]=arr[start];
else
{
build(2*x,start,mid);
build(2*x+1,mid+1,stop);
war[1][x].push_back( 1);
war[1][x].push_back(1);

mp[1][x]=mp[1][2*x]+mp[1][2*x+1];
}
}
void update(int x,int start,int stop,int ver,int pos,int value,int vt)
{
	int left,right;
	int mid=(start+stop)/2;
 
  

if(start==stop && start==pos)
{
mp[ver][x]=value;
return;
}
else{
left=war[vt][x][0];
 
 
  right=war[vt][x][1];

if(pos>mid)
{
 update(2*x+1,mid+1,stop,ver,pos,value,right );
mp[ver][x]=mp[left][2*x]+mp[ver][2*x+1];
 
war[ver][x].push_back(left);
war[ver][x].push_back(ver );
}
else
{
 update(2*x,start,mid,ver,pos,value,left );
mp[ver][x]=mp[ver][2*x]+mp[right ][2*x+1];
war[ver][x].push_back( ver );
 
war[ver][x].push_back(right );
}
}
}
int query(int ver,int start,int stop,int qst,int qsp,int x)
{
	int mid=(start+stop)/2;
if(qst>stop || start>qsp)
return(0);
if(qst<=start && qsp>=stop)
return(mp[ver][x]);
int left=war[ver][x][0];
int  right=war[ver][x][1];
int l=query(left ,start,mid,qst,qsp,2*x);
int r=query(right ,mid+1,stop,qst,qsp,2*x+1);
return(l+r);
}



int main()
{
	arr.push_back(-1);
int n;

cin>>n;
for(int t=1;t<=n;t++)
{
int a;
cin>>a;
arr.push_back(a);
}
//update h times
build(1,1,n);
int h;
cin>>h;
int pos,num;
for(int r=1;r<=h;r++)
{
cin>>pos>>num;
update(1,1,n,r+1,pos,num,r);
}

int queries;
cin>>queries;
for(int e=1;e<=queries;e++)
{
int a,b,ver;
cin>>a>>b>>ver;
int ans=query(ver,1,n,a,b,1);
cout<<ans<<endl;
}


}




