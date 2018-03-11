#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[111111][33]={0};
int n,q,v;
cin>>n>>q;
for(int t=1;t<=n;t++)
{
	cin>>v;
for(int e=0;e<=30;e++)
{  arr[t][e]= arr[t-1][e];
if((v&(1<<e))!=0){
	 	arr[t][e]+= 1;
}
// if(t==n )
// 	cout<<arr[t][e]<<" ";
}
}
for(int u=1;u<=q;u++)
{
	int st,sp;
	cin>>st>>sp;
	int l=sp-st+1;
long long int sum=0;
for(int e=0;e<=30;e++)
{
int g=arr[sp][e]-arr[st-1][e];
if(g<(l-g))
sum+=pow(2,e);
}
cout<<sum<<endl;


}






}