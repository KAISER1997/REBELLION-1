#include <bits/stdc++.h>
using namespace std;
int main()
{
int h;
cin>>h;
vector<int > arr;
int ct=0;
int grl=0;
int sum=0;
for(int t=1;t<=h+1;t++)

{

int j;
cin>>j;
sum+=j;
if(ct==1 && j>=2 && grl==0)
{grl=t-1;

}
else if(ct==1)
{
	ct=0;
}
arr.push_back(j);
if(j>=2)
	ct=1;
}

if(grl==0)
	cout<<"perfect";
else
{



int t=grl;


int p1[999999]={0};
int p2[999999]={0};
int st=0,st1=0,st2=0;
int k=0;
//cout<<t<<"S"<<endl;
for(int e=0;e<arr.size();e++)
{
	//cout<<"D";
if(e==t-1)
{
st1=k+1;
st2=k+2;
}

  if(e==t)
{
int u=k+1;
for(int f=1;f<=arr[e];f++)
{
p1[u]=st1;
if(f<=arr[e]/2)
p2[u]=st1;
else
p2[u]=st2;
++u;
}









st=u-1;
}
else
{
int u=k+1;
for(int f=1;f<=arr[e];f++)
{
p1[u]=st;
p2[u]=st;
++u;
}
st=u-1;
//cout<<st<<endl;




}

k=k+arr[e];


}

cout<<"ambiguous"<<endl;
for(int t=1;t<=sum;t++)
	cout<<p1[t]<<" ";
cout<<endl;
for(int t=1;t<=sum;t++)
	cout<<p2[t]<<" ";


}




}