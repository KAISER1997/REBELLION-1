#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[99]={0};
for(int e=1;e<=n;e++)
{
int f;
cin>>f;
arr[f]+=1;
}

int z=min(arr[1],arr[2]);
int q=arr[1]-z;
q=q/3;
cout<<(z+q);




}