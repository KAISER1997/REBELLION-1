#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int > arr;
int countt[111111]={0};
for(int e=1;e<=n;e++)
{
int f;
cin>>f;
arr.push_back(f);
countt[f]+=1;
}
sort(arr.begin(),arr.end());
int sum=0;
 int u=0;
for(int e=arr.size()-1;e>=0;e-- )
{
if(countt[arr[e]]%2==1)
	u=1;



}




 if(u==1 )
cout<<"Conan";
else
cout<<"Agasa";
}




 