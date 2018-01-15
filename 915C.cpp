#include <bits/stdc++.h>
using namespace std;
 
int countt[999]={0};
int dt=0;
vector<int >a2,ans;
void work(vector<int > a1,int q)
{
	 // for(int e=0;e<a1.size();e++)
	 // 	cout<<a1[e];
	 // cout<<endl;
if(q==a2.size())
{
ans=a1;
dt=1;
return;

}


int t=0;
int gg;
if(countt[a2[q]]==0)
{
for(int e=a2[q]-1;e>=0;e--)
{
if(countt[e]!=0)
{
gg=e;
 a1.push_back(e);
 t=1;
  
break;
}
}
if(t==1)
{ dt=1;
    countt[gg]-=1;
	for(int e=9;e>=0;e--)
{
for(int w=1;w<=countt[e];w++)
{
a1.push_back(e);
}
}
ans=a1;
}
}
 
else
{

for(int y=a2[q];y>=a2[q];y--)
{
	if(countt[y]==0)
		continue;
vector<int > a3;
  
 a3=a1;
 a3.push_back(y);
countt[y]-=1;
if(dt==0)
work(a3,q+1);
countt[y]+=1;
}
if(dt==0)
{
	int p=-1;
for(int e=a2[q]-1;e>=0;e--)
{
if(countt[e]!=0)
{

	p=e;
	break;
}


}
if(p!=-1)
{ans=a1;
ans.push_back(p);
countt[p]-=1;
for(int r=9;r>=0;r--)
	for(int s=0;s<countt[r];s++)
		ans.push_back(r);

dt=1;
}

}

}
}

int main()
{
long long int aw,ar;
cin>>aw>>ar;
vector<int> cc;
while(aw!=0)
{
int u=aw%10;
countt[u]+=1;
aw=aw/10;
cc.push_back(1);
}
while(ar!=0)
{
int q=ar%10;
a2.push_back(q);
ar=ar/10;
}
 reverse(a2.begin(),a2.end());
vector<int > z;
if(cc.size()==a2.size())
{
work(z,0);
for(int f=0;f<ans.size();f++)
	cout<<ans[f];
}
else
{

for(int e=9;e>=0;e--)
	for(int w=0;w<countt[e];w++)
		cout<<e;



}



}