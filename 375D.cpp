#include <bits/stdc++.h>
using namespace std;
vector<int > arr[111100];
vector<int> ww;
int limit,n,vv;
int check[111100]={0};
int bin[111100]={0};
int noz[111100]={0};
bool firee(pair<int ,pair<int ,int > > a1,pair<int ,pair<int ,int > > a2)
{
     if((a1.second.first/vv)!=(a2.second.first/vv))
     	return((a1.second.first/vv)<(a2.second.first/vv));
    return(a1.second.second<a2.second.second);
 
}

void update(int pos  ,int val )
{
	limit=100010;
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


int startz[111100]={0};
int stopz[111100]={0};





int DFS(int start)
{
	ww.push_back(start);
	startz[start]=ww.size()-1;
	int t=0,xc=0;
for(int e=0;e<arr[start].size();e++)
{  if(check[arr[start][e]]!=0)
	continue;
	check[arr[start][e]]=1;
	xc+=DFS(arr[start][e]);
	++t;
}
 
    if(t!=0)
	ww.push_back(start);
stopz[start]=ww.size()-1;
if(t==0)
return(noz[start]=1);
return(noz[start]=1+xc);
}
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);

int p;
cin>>n>>p;
vv=1500;
 
int colour[111100]={0};
for(int e=1;e<=n;e++)
{
int a,b;
 cin>>colour[e];
 limit=max(colour[e],limit);
}

for(int e=1;e<=n-1;e++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);

}

check[1]=1;
DFS(1);
  // for(int e=0;e<ww.size();e++)
  // 	cout<<ww[e]<<" "<<noz[ww[e]]<<" "<<startz[ww[e]]<<" "<<stopz[ww[e]]<<endl;
vector<pair<int ,int > > v ;
vector< pair<int ,pair<int ,int > > > xx;
int qq[111111]={0},gear[111111]={0};
for(int r=1;r<=p;r++)
{
int a,b;
cin>>a>>b;
qq[r]=b; 
gear[r]=a;
xx.push_back(make_pair(r,make_pair(startz[a],stopz[a])));
}



 sort(xx.begin(),xx.end(),firee);

 int ind=xx[0].first;
 int beg,end;
 beg=xx[0].second.first;
 end=xx[0].second.second;
 int col[111111]={0};
 int god=0;
 for(int t=beg;t<=end;t++)
 {
 if(stopz[ww[t]]==t)
 {
 	if(col[colour[ww[t]]]!=0)
 		update(col[colour[ww[t]]],-1);
 	else
 		++god;
 col[colour[ww[t]]]+=1;
 		update(col[colour[ww[t]]],+1);


 }
 }
 int ans[999999]={0};
 ans[ind]=god-sumv(qq[ind]-1);
//cout<<gear[ind]<<" "<<qq[ind]<<" "<< ans[ind]<<endl;
 for(int e=1;e<xx.size();e++)
 {
 int fkst,fkstp;
 int ind=xx[e].first;
 fkst=xx[e].second.first;
 fkstp=xx[e].second.second;
 if(fkstp>end)
 {
 for(int t=end+1;t<=fkstp;t++)
 {
if(stopz[ww[t]]==t)
{
	if(col[colour[ww[t]]]>0)
		update(col[colour[ww[t]]],-1);
	else
		++god;
col[colour[ww[t]]]+=1;
		update(col[colour[ww[t]]],+1);
}
}
}
if(fkst<beg)
{
for(int t=beg-1;t>=fkst;t--)
{
if(stopz[ww[t]]==t)
{
	if(col[colour[ww[t]]]!=0)
		update(col[colour[ww[t]]],-1);
	else
		++god;
col[colour[ww[t]]]+=1;
		update(col[colour[ww[t]]],+1);
}
}


}
if(fkst>beg)
{
for(int t=beg;t<fkst;t++)
{
if(stopz[ww[t]]==t)
{
	if(col[colour[ww[t]]]!=0)
	{	update(col[colour[ww[t]]],-1);
col[colour[ww[t]]]-=1;
}
if(col[colour[ww[t]]]==0)
--god;
else
		update(col[colour[ww[t]]],+1);
}
}
}


if(fkstp<end)
{
for(int t=end;t>fkstp;t--)
{
if(stopz[ww[t]]==t)
{
	if(col[colour[ww[t]]]!=0)
		{update(col[colour[ww[t]]],-1);
col[colour[ww[t]]]-=1;

}
		 		if(col[colour[ww[t]]]==0)
--god;
else
update(col[colour[ww[t]]],+1);

}
}
}

beg=fkst;
end=fkstp;
ans[ind]=god-sumv(qq[ind]-1);




}

for(int e=1;e<=p;e++)
	cout<<ans[e]<<endl;






}