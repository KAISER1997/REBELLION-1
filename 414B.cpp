#include <bits/stdc++.h>
using namespace std;
vector<int > arr[9999];
int valuew[2222]={0};
int k;
void DFS(int start,int x)
{  
valuew[x]+=1;
for(int r=0;r<arr[start].size();r++)
DFS(arr[start][r],x+1);
}
long long int store[2002][2002]={0};
 long long int ncrModp( long long int n, long long int r, long long int p)
 
{
 long long int value[9999]={0};
value[0]=1;
for( long long int e=1;e<=n;e++)
{
	store[e][0]=1;
for( long long int f=e;f>0;f--)
{
value[f]=(value[f]+value[f-1])%p;
 //cout<<value[f]<<" ";
store[e][f]=value[f];
}
 
// cout<<endl;
}
return(value[r]);

}











int  main()
{

int n;
cin>>n>>k;
int p=1000000007;
for(int e=1;e<=n;e++)
{

for(int f=2;f*e<=n;f++)
{
arr[e].push_back(f*e);
}

}

for(int e=1;e<=n;e++)
	DFS(e,1);
ncrModp(k-1,k-1,p);
long long int sans=0;
for(int e=1;e<=k;e++)
{
	//cout<<valuew[e]<<endl;
	if(k==1)
		sans+=valuew[e];
	else
sans+=store[k-1][e-1] *valuew[e];
sans=sans%p;



}

cout<<sans;







}