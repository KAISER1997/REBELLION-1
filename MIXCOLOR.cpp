#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	for(int e=1;e<=q;e++)
	{
long long int n,tf;
cin>>n;
set<long long int > arr;
for(int t=0;t<n;t++)
	{	cin>>tf;
		arr.insert(tf);
}
cout<<n-arr.size()<<endl;

}






}