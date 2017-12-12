#include <bits/stdc++.h>
using namespace std;
int main()
{

	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long int n;
vector<long long int > arr;
cin>>n;
for(long long int r=0;r<n;r++)
{
long long int q;
cin>>q;
arr.push_back(q);
}
long long int check[99999]={0};
sort(arr.begin(),arr.end(),greater <int >() );
long long int j=0;
 for(long long int e=0;e<n;e++)
 {
long long int prev=arr[e];
if(check[e]==0)
{ ++j;
	check[e]=1;
for(long long int f=e+1;f<n;f++)
{
if(check[f]==0 && arr[f]<prev)
{
check[f]=1;
prev=arr[f];
}


}
}

}
cout<<j;
}