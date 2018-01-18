#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1111111]={0};
	vector<int > war;
	int n;
	cin>>n;
	for(int e=1;e<=n;e++)
	{
       int a,b;
       cin>>a>>b;
        war.push_back(a);
        arr[a]=b;
	}
sort(war.begin(),war.end());
int start=war[0];
int ans[1111111]={0};
ans[war[0]]=1;
int maxx=1;
for(vector<int >::iterator it=war.begin()+1;it!=war.end();it++)
{
int pos=*it;
int q=arr[pos];
int z=pos-q ;
if(pos-q<start)
ans[ pos ]=1;
else
{
	//cout<<z<<endl;
vector<int >::iterator it1;
it1=lower_bound(war.begin(),it,z);
if(it1!=war.begin())
{
it1= prev(it1,1);
//cout<<*it1<<endl;
ans[pos]=1+ans[*it1];
}
else
ans[pos]=1 ;	
maxx=max(maxx,ans[pos]);
// cout<<pos<<" "<<q<<" "<<*it1<<endl;
}

}
cout<<n-maxx;




}