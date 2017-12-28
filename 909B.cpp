#include <bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
 
 int maxx=-1;
 int arr[9999]={0};
 for(int r1=1;r1<=n;r1++)
 {
for(int r2=r1;r2<=n;r2++)
{
for(int t=r1;t<=r2;t++)
{
arr[t]+=1;
maxx=max(maxx,arr[t]);

}


}

 }
 cout<<maxx;



}