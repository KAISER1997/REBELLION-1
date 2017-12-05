#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n;
 

int main()
{
	 
 
long long int r;
cin>>n;
vector<long long int> kk;
vector<long long int > ignite;
kk.push_back(-1);
long long int valuer[510][510]={0};
for(long long int t=1;t<=n;t++)
	for(long long int t2=1;t2<=n;t2++)
    cin>> valuer[t][t2];
for(long long int e=1;e<=n;e++)
{
	long long int vv;
	cin>>vv;
	kk.push_back(vv);
 
}
long long int check[999]={0};
vector <long long int > jojo;
long long int uu=n;
 long long int mt=kk[uu];
 check[mt]=1;
 ignite.push_back(mt);
 long long int total;
 
 for(long long int t=0;t<ignite.size();t++)
 {
total=0;
long long int s1=ignite[t];
for(long long int t1=1;t1<=n;t1++)
{
long long int s2=t1;
for(int t2=1;t2<=n;t2++)
{
long long int s3=t2;

valuer[s2][s3]=min(valuer[s2][s1]+valuer[s1][s3],valuer[s2][s3]);
if(!(check[s2]==0|| check[s3]==0))
total=total+valuer[s2][s3];

} }

--uu;
jojo.push_back(total);
if(uu==0)
	break;
mt=kk[uu];
 check[mt]=1;
ignite.push_back(kk[uu]);
//cout<<uu<<" "<<kk[uu]<<endl;
 

}
for(long long int y=n-1;y>=0;y--)
cout<<jojo[y]<<" ";
}