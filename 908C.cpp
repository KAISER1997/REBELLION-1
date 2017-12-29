#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,r;
cin>>n>>r;
int arr[9999]={0};
for(int e=1;e<=n;e++)
	cin>>arr[e];
int  level[9999]={0};
long double left[9999];
long double right[9999];
long double ht[9999]={0};
for(int g=1;g<=n;g++)
{
int j=arr[g];
int s1=j-r;
int s2=j+r;

long double maxx=(double)r;
for(int u=1;u<=g-1  ;u++)
{
if(!(s1>right[u] || left[u]>s2))
{
long double rp=r*r*4;
long double ww=j-arr[u];
ww=ww*ww;
long double ss=sqrt(rp-ww);
maxx=max(maxx,(double)ht[u]+ss);



}

}
if(g==1)
{
 ht[g]=r;
 
}
else
ht[g]=maxx;


left[g]=j-r;
right[g]=j+r;
}
 
   
for(int e=1;e<=n;e++)
	{
   std::cout << std::fixed;
    std::cout << std::setprecision(8);
		cout<<ht[e]<<" ";
}

}









 