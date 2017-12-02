#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <sstream>
using namespace std;
int main()
{

	long long int n,f;
	cin>>n>>f;
vector<string > vv;
vv.push_back("00");
for(long long int t=1;t<=9;t++)
	vv.push_back(to_string(11*t));

//cout<<vv.size();
 long long int ff=2;
while(1!=0)
{   
	long long int hv=vv.size();
ff=ff+2;
for(long long int h=1;h<=9;h++)
{
for(long long int u=0;u<hv;u++)
{	string tg="";
 for(long long int t=1;t<=(ff-2-vv[u].length())/2;t++)
tg=tg+to_string(0);
vv.push_back(to_string(h)+tg+vv[u]+tg+to_string(h));




}
 if(vv.size()>n+3)
	break;

}

 if(vv.size()>n+3)
	break;
 
}

long long int sum=0;

for(long long int t=1;t<=n;t++)
	{stringstream ss(vv[t]);
     long long int u;
     ss>>u;
     sum=sum+u;



	}
cout<<sum%f;












}
