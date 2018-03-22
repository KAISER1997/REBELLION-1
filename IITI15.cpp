#include <bits/stdc++.h>
using namespace std;

 
   int bin[888888]={0};
int limit=25000;
void update(int pos  ,int val )
{
bin[pos]+=val;

while(pos<=limit)
{
pos=pos+(pos&(-pos));
bin[pos]+=val;
}
}
long long int sumv(int pos)
{
long long int sum=0;
	while(pos>0)
{
 
sum=sum+bin[pos];
 
pos=pos-(pos&(-pos));
} 

return(sum);
}


vector<pair<long long int,long long int > > dataCompression(vector<pair<long long int,long long int > > vv)
{
vector<pair<long long int,long  long int > > zz=vv;	
sort(vv.begin(),vv.end());
int prev=-1000;
for(int e=0;e<vv.size();e++)
{
if(vv[e].first>prev)
vv[e].first=e;
else
vv[e].first=vv[e-1].first;
prev=vv[e].first;
}
for(int e=0;e<vv.size();e++)
{
zz[vv[e].second].first=vv[e].first;
}
return(zz);
}


 
bool firee(pair<int ,pair<int ,int > > a1,pair<int ,pair<int ,int > > a2)
{
     if((a1.second.first/150)!=(a2.second.first/150))
     	return((a1.second.first/150)<(a2.second.first/150));
    return(a1.second.second<a2.second.second);
 
}

int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int n,a,b;
vector<pair<long long int,long long int > > arr;
cin>>n;
 int ans[1111111]={0};
arr.push_back(make_pair(-1,0));
for(int t=1;t<=n;t++)
{
long long int a;
cin>>a;
arr.push_back(make_pair(a,t));
}
  vector<pair<long long int ,long long int > > war=dataCompression(arr);
// for(int e=0;e<war.size();e++)
// {
// //cout<<war[e].first<<" "<<war[e].second<<endl;


// }

int q;
cin>>q;
vector< pair<int ,pair<int ,int > > > xx; 
for(int z=1;z<=q;z++)
{  cin>>a>>b;
xx.push_back(make_pair(z,make_pair(a,b)));
}
long long int sumz=0;
sort(xx.begin(),xx.end(),firee);
int start=xx[0].second.first;
int stop=xx[0].second.second;
//cout<<start<<" "<<stop<<endl;
for(int t=stop;t>=start;t--)
{  
int u=war[t].first;
//cout<<u<<"<"<<endl;
update(u,1);
sumz=sumz+sumv(u-1);
}
//cout<<sumz<<endl;
 ans[xx[0].first]=sumz;
for(int ev=1;ev<xx.size();ev++)
{  
	int indx=xx[ev].first;
 int beg=xx[ev].second.first;
 int end=xx[ev].second.second;
 if(end>stop)
 {
for(int u=stop+1;u<=end;u++)
{int j=war[u].first;
     
	long long int h=u-start-sumv(j);
	update(j,1);
	sumz+=h;

}
 }
 if(stop>end)
 {
 	 for(int e=stop;e>end;e--)
{
int j=war[e].first;
update(j,-1);
}	
for(int u=end+1;u<=stop;u++)
{int j=war[u].first;
     
	long long int h=u-start-sumv(j);
	update(j,1);
	sumz-=h;

}
 	 for(int e=stop;e>end;e--)
{
int j=war[e].first;
update(j,-1);
}


 }




 stop=end;
 if(start>beg)
 {
for(int e=start-1;e>=beg;e--)
{
	int j=war[e].first;
sumz+=sumv(j-1);
update(j,1);
}
 }
long long int hj=0;
 if(beg>start)
 {
 for(int e=beg-1;e>=start;e--)
{
int j=war[e].first;
update(j,-1);
}	 
for(int e=beg-1;e>=start;e--)
{
int j=war[e].first;
hj+=sumv(j-1);
update(j,1);
}
 for(int e=beg-1;e>=start;e--)
{
int j=war[e].first;
update(j,-1);
}
 
sumz-=hj;
}
ans[indx]=sumz;
 

start=beg;

}
for(int e=1;e<=q;e++)
	cout<<ans[e]<<endl;


}




