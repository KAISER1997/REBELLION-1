#include <bits/stdc++.h>
using namespace std;
int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector< long long int > vv;

long long int sum=0,n;
long long int final=0;
map< long long int ,long long int > mp;
cin>>n;
vv.push_back(-5);
for(long long int u=1;u<=n;u++)
{

long long int z;
cin>>z;
vv.push_back(z);
 mp[z]+=1;

if(u>=2)
{
final=final+(z*(u-1))-sum-mp[z-1]+mp[z+1];
//cout<<final<<endl;

	}sum=sum+z ;


}




cout<<final;





}