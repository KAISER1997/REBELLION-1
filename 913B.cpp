#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
cin>>n;
vector<int > arr[111111];

for(int e=2;e<=n;e++)
{

int b;
cin>>b;
arr[b].push_back(e);

}
int q=0;
for(int t=1;t<=n;t++)
{
	int z=0;
 for(int e=0;e<arr[t].size();e++)
 {
 	if(arr[arr[t][e]].size()==0)
 		++z;

 }
 if(arr[t].size()!=0 && z<3)
 	q=1;
}

if(q==1)
	cout<<"No";
else
	cout<<"Yes";




}