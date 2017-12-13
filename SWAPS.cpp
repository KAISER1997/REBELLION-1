#include <bits/stdc++.h>
using namespace std;
vector <long long int> store[111111];
const int m=5e4 + 5;
long long int  bin[1111][m]={0};
vector <long long int> arr;
long long int n;
long long int sq;
long long int block=0;
void useBox()
{
for(long long int f=1;f<=n;f+=sq)
{
++block;
for(long long int g=f;g<(f+sq) && g<=n;g++)
{
store[block].push_back(arr[g]);
long long int x=arr[g];
while(x<=50001)
{
bin[block][x]+=1;
x=x+(x&-x);
}
}
}

}

long long int  sumBox(long long int bn,long long int g)
{
long long int sum=0;
while(g>0)
{
sum=sum+bin[bn][g];
g=g-(g&-g);
}
return(sum);
}

void updateBox(long long int bn,long long int prev,long long int newc)
{
	long long int x=prev;
while(x<=50001)
{
bin[bn][x]-=1;
x=x+(x&-x);
}
x=newc;
while(x<=50001)
{
bin[bn][x]+=1;
x=x+(x&-x);
}
}
long long int gv=0;
long long int findBox(long long int j)
{
long long int fk;
if(j%sq==0)
	fk=j/sq;
else
fk=(j/sq)+1;

gv=j-(sq*(fk-1))-1;
return(fk);
}



long long int sum(long long int bit[99999],long long int nl)
{
long long int q=0;
while(nl>0)
{
q=q+bit[nl];
nl=nl-(nl&-nl);
}
return(q);
}

void update(long long int bit[99999],long long int x,long long int size)
{
while(x<=size)

{

bit[x]+=1;

x=x+(x&-x);

}
}


long long int countt()
{


	long long int bit[99999]={0};
long long int r=0;
for(long long int u=n;u>=1;u--)
{
r=r+sum(bit,arr[u]-1);
update(bit,arr[u],50001);
}

//cout<<r<<endl;
return(r);

}






















  int main()
{

 ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
sq=1000;
arr.push_back(-5);
for(long long int t=1;t<=n;t++)
{
long long int d;
cin>>d;
arr.push_back(d);
}


useBox();

long long int query;
cin>>query;
long long int pk=0;
pk=countt();
//cout<<pk;
for(long long int t=1;t<=query;t++)
{
	 
long long int pos,val;
cin>>pos>>val;
 //cout<<block;
long long int h=findBox(pos);
long long int eq=gv;
long long int prev=store[h][eq];
store[h][eq]=val;
for(long long int e=h+1;e<=block;e++)
{
pk=pk+sumBox(e,val-1)-sumBox(e,prev-1);
}
for(long long int e=1;e<h;e++)
{
pk=pk-sumBox(e,val)+sumBox(e,prev);
}
for(long long int op=0;op<gv;op++)
{
if(val<store[h][op])
	++pk;
if(prev<store[h][op])
	--pk;

}

for(long long int op=gv+1;op<store[h].size();op++)
{
if(val>store[h][op])
	++pk;
if(prev>store[h][op])
	--pk;

}
cout<<pk<<'\n';
updateBox(h,prev,val);



}





















}