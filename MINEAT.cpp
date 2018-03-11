#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int ec;
cin>>ec;
for(long long int gt=1;gt<=ec;gt++)
{
long long int n,hr;
cin>>n>>hr;
vector<long long int > arr;
for(long long int e=0;e<n;e++)
{
long long int a;
cin>>a;
arr.push_back(a);
}
 
long long int start=1;
long long int stop=1000000001;
long long int mid;
long long int ans=9999999999;
while (start<=stop) {
       mid=(start+stop)/2;
   long long int sum=0;
   for(long long int e=0;e<arr.size();e++)
   {
     sum+=ceil((double)arr[e]/mid);
   }
 
 if(sum>hr)
{
start=mid+1;
}
else
{
ans=min(ans,mid);
stop=mid-1;

}



   }
   cout<<ans<<endl;


}







}