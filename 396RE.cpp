#include <bits/stdc++.h>
using namespace std;
#define mid (start+stop)/2
long long int fg=1000000007;

vector<long long int > EulerTour;
long long int beg[2999999],endz[2999999],check[2999999];
vector<int > arr[2999999];
long long int level[2999999]={0};
void ET(long long int start,long long int lev)
{
level[start]=lev;
EulerTour.push_back(start);
beg[start]=EulerTour.size()-1;
for(int e=0;e<arr[start].size();e++)
	if(check[arr[start][e]]==0)
	{
		check[arr[start][e]]=1;

		ET(arr[start][e],lev+1);
	}
EulerTour.push_back(start);
endz[start]=EulerTour.size()-1;
}
long long int leftz[2999999],rightz[2999999];
void updatez(long long int x,long long int start,long long int stop,long long int qst,long long int qsp,long long int xk,long long int k)
{
if(qst>stop || start>qsp)
	return;
if(qst<=start && qsp>=stop)
{
leftz[x]+=xk;
rightz[x]+=k;
leftz[x]=leftz[x]%fg;
rightz[x]=rightz[x]%fg;
}
else
{
updatez(2*x,start,mid,qst,qsp,xk,k);
updatez(2*x+1,mid+1,stop,qst,qsp,xk,k);

}

}
long long int query(long long int x,long long int start,long long int stop,long long int svt,long long int a,long long int b)
{

if(svt>stop || svt<start)
	return(0);

else if(stop==start)
	return((a+leftz[x]-level[EulerTour[svt]]*(b+rightz[x])));
else
{
	a+=leftz[x];
	b+=rightz[x];
	a=a%fg;
	b=b%fg;
if(svt>mid)
	return(query(2*x+1,mid+1,stop,svt,a,b));
else
	return(query(2*x,start,mid,svt,a,b));

}
}



int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n;
cin>>n;
for(long long int e=2;e<=n;e++)
{
long long int h;
cin>>h;
arr[h].push_back(e);
}
EulerTour.push_back(-1);
 
check[1]=1;
ET(1,0);

long long int q,v,x,k;
cin>>q;
for(long long int e=1;e<=q;e++)
{
	long long int d;
cin>>d;
if(d==1)
{
cin>>v>>x>>k;
updatez(1,1,EulerTour.size()-1,beg[v],endz[v],x+level[v]*k,k);


}
else
{
cin>>v;

 
long long int r1=query(1,1,EulerTour.size()-1,beg[v],0,0);

 if(((r1)%fg )>=0)
 	cout<<(r1)%fg<<endl;
 else
  	cout<<(fg+r1%fg)<<endl;



}




}

}






 