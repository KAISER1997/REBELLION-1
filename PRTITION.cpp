#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	 int t=0;
	cin>>t;
	for(  int h=1;h<=t;h++)
	{
  int x,n;
cin>>x>>n;
  int a=0;
 
  int l=0;
  int r=0;
  int arr[1000002]={0};
int nt,no;
 if(n%2==0 && x%2==1)
 {
nt=1;
no=(n/2)-1;
 
 }
else if(n%2==0 && x%2==0)
{
nt=0;
no=n/2;
}
else if(n%2==1 && x%2==0)
{
nt=1;
no=(n/2)-1;
}
else
{

nt=0;
no=n/2;


}

vector<  int > vr;
for(  int t=n;t>=1;t--)
{
	if(t!=x)
vr.push_back(t);
}
vr.push_back(0);
 int q1=0;
  int q2=0;
  int t=0;
vector<pair<  int ,  int > > zz;
 for(  int e=0;e<vr.size()-1;e+=2)
 {
zz.push_back(make_pair(vr[e],vr[e+1]));
 }





//cout<<nt<<no;



if((no)%2==0 && (no!=0))
{
if(nt==0)
{
for(  int e=0;e<no/2;e++)
{
arr[zz[e].first]=0;
arr[zz[e].second]=1;

}
for(  int e=no/2;e<zz.size();e++)
{
arr[zz[e].first]=1;
arr[zz[e].second]=0;

}
}
else
{
	  int t=0;
for(  int e=0;e<zz.size();e++)
{
if(t<(no/2)-1  && zz[e].first-zz[e].second==1)
{
arr[zz[e].first]=0;
arr[zz[e].second]=1;
++t;

}
else if(zz[e].first-zz[e].second==2)
{
arr[zz[e].first]=0;
arr[zz[e].second]=1;


}
else
{
	arr[zz[e].first]=1;
arr[zz[e].second]=0;
}



}








}




arr[x]=2;


 
	for(long long int h=1;h<=n;h++)
		cout<<arr[h];
	cout<<endl;
}
else
cout<<"impossible"<<endl;






}



}







 