#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
int arr[1111]={0};
int task;
cin>>task>>n;
for(int u=1;u<=task;u++)
{
int f,g;
cin>>f>>g;
arr[f]=max(arr[f],g);

}

int hit=0;
for(int e=n;e>=1;e--)
{

hit=max(hit,arr[e]);
++hit;

}



cout<<hit;







}