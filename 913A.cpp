#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,m;
cin>>n>>m;
vector<long long int> arr;
long long int g=0;
while(m!=0)
{
long long int e=m%2;
 
arr.push_back(e);
m=m/2;
}
 
for(long long int e=0;e<n && e<arr.size();e++)
g=g+pow(2,e)* arr[e];


cout<<g;





}





 