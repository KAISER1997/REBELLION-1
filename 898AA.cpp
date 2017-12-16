#include <bits/stdc++.h>
using namespace std;
int main()
{

long long int n;
cin>>n;
long long int x=n%10;
if(x>=5)
	n=n+(10-x);
else
	n=n-x;
cout<<n;





}