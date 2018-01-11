#include <bits/stdc++.h>
using namespace std;
int main()
{
 
vector <int > left;
vector <pair<int ,int > > right;
int n,tot;
cin>>n>>tot;
 for(int h=0;h<n;h++)
 {
 	int a,b;
 	cin>>a>>b;
left.push_back(a);
right.push_back(make_pair(b,h+1));

 }

int s=0;
 vector<int > ans;


int start=0;
int stop=n;
while(start<=stop)
{
	int k=start+(stop-start)/2;

 int u=k;
 vector<pair<int ,int > >l;
 for(int t=0;t<n;t++)
 {
if(left[t]>=u)
{

	l.push_back(make_pair(right[t].first,right[t].second));

}
 }
 sort(l.begin(),l.end());
 int g=0;
 int total=0;
 vector<int > aw;
 for(int r=0;r<u && r<l.size();r++)
 {
total+=l[r].first;
++g;
aw.push_back(l[r].second);
}
if(g==u && total<=tot)
{ans=aw;
start=k+1;
}
else
stop=k-1;







}
cout<<ans.size()<<endl;
cout<<ans.size()<<endl;

for(int f=0;f<ans.size();f++)
cout<<ans[f]<<" ";
}