#include <bits/stdc++.h>
using namespace std;
int main()
{

long long int n,a,b,z=0,y1,x1;
cin>>n>>a>>b;
for(long long int y=0;y<=n;y++)
{
if((n-(y*b))>=0 && (n-(y*b))%a==0)
{
y1=y;
x1=(n-(y*b))/a;
z=1;
break;

}

}
if(z==0)
	cout<<"NO";
else
{
cout<<"YES"<<endl;
cout<<x1<<" "<<y1;


}








}