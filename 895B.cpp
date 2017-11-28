#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector< long long int > ww;
	vector<long long int >arr;
long long int n,x,k;
long long int hh=0;
cin>>n;
cin>>x>>k;
long long int total=0;
vector<  long long int> :: iterator it;
for(long long int t=1;t<=n;t++)
{
long long int yy;
cin>>yy;
arr.push_back(yy);
 ww.push_back(yy/x);
 // if(k==0 && yy%x!=0)
 // 	++total;

}

sort(ww.begin(),ww.end());
sort(arr.begin(),arr.end());
int eh=0;
for(it=ww.begin();it!=ww.end();it++)
{

long long int e=arr[eh];
++eh;
//cout<<e<<" "<<*it<<endl;
long long int h=e/x;
h=h*x;
long long int r;
if(e==h)
	{r=(*it)+k-1;
 


	}
else
	r=(*it)+k;
//cout<<h<<e<<" " <<x<<" "<<r<<endl;
long long int ef=*it;

if(binary_search(it,ww.end(),r))
{
	long long int z=r;
long long int s1=lower_bound(it,ww.end(),z)-ww.begin();
long long int s2=upper_bound(it,ww.end(),z)-ww.begin()-1;
//cout<<z<<" "<<s1<<" "<<s2 ;
if(  k==1  )
{
 //cout<<" " << ((s2-s1+1)*2-1)<<endl;
total=total+(s2-s1+1);
if(e%x==0)
{
long long int s3=upper_bound(arr.begin()+eh-1,arr.end(),e)-arr.begin()-1;
total=total+s3-eh+1;
}

}
else if(    k!=1  )
{
 //cout<<" "<<(s2-s1+1)<<endl;
total=total+(s2-s1+1);
if(k==0 && e%x!=0)
{
long long int s3=upper_bound(arr.begin()+eh-1,arr.end(),e)-arr.begin()-1;
total=total+s3-eh+1;





}




}



}
else
{


}
 


}

cout<<total;
}

























 