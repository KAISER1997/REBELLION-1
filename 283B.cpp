#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long int check[333333]={0};
long long int final[333333]={0};

   map<long long int,long long int > mp;
long long int DFS(long long int start, vector<long long int > arr[333333])

{
     if(start==1)
     	return(-1);
	//cout<<start<<endl;
if(arr[start].size()==0)
	{

          check[start]=2;
          final[start]= mp[start];
		return( mp[start]);


	}
 
check[start]=1;
  long long int h=0,j=0;
for(long long int t=0;t<arr[start].size();t++)
{

if(arr[start][t]==start)
	j=1;

if(check[arr[start][t]]==0)
{
long long int y=DFS(arr[start][t],arr);
if(y==-1) j=1;
h=h+y;

}
else if(check[arr[start][t]]==1)
j=1;
else if(check[arr[start][t]]==2 )
{
if(final[arr[start][t]]==-1 || arr[start][t]==1)
	j=1;
else
	h=h+final[arr[start][t]] ;

}
}

check[start]=2;
if(j==1)
	{     final[start]=-1;
		return(-1);}
else
{	
final[start]=h+mp[start];

	return(final[start]);



}
}

int main()
{ long long int n;
	cin>>n;
     vector<long long int > arr;
    vector<long long int >store[333333];
    arr.push_back(-1);
    arr.push_back(1);
    for(long long int t=1;t<=n-1;t++)
    {
   long long  int g;
    cin>>g;
    arr.push_back(g);
    }

  
    for(long long int t=2;t<=n;t++)
    {  
        long long int l=t;
        mp[l]=arr[t];
        //cout<<t<<" "<<mp[l];
        long long int x=mp[l]+l;
        if(x>n )
        	continue;
         
        mp[l]=arr[x]+mp[l];
        //cout<<t<<" "<<mp[l]<<endl;
        if((x-arr[x])>0)
        {	store[t].push_back(x-arr[x]);

         //cout<<t<<" "<<x-arr[x]<<endl;
        }



    }
    check[1]=1;
    for(long long int t=2;t<=n;t++)
    	if(check[t]==0)
           long long int e= DFS(t,store);

for(long long int t=1;t<n;t++)
{ 
long long int x=1,y=0;
	arr[1]=t;
	x=x+arr[1];
	y=y+arr[1];
	if(x>n)
		{cout<<y<<endl;
        continue;
		}
//cout<<y<<" "<<x;
y=y+arr[x];
x=x-arr[x];
if(x<=0)
{
	cout<<y<<endl;
	continue;
}

if(final[x]==-1 || x==1)
	cout<<"-1"<<endl;
else
	cout<<y+final[x]<<endl;




}











}