#include <bits/stdc++.h>
using namespace std;
int main()
{


int gg;
cin>>gg;
for(int fy=1;fy<=gg;fy++)
{
int n;
cin>>n;

vector<int > finger;
vector<int > sizez;
int x;
for(int e=1;e<=n;e++)
{
 
cin>>x;
finger.push_back(x);

}
for(int f=1;f<=n;f++)
{
cin>>x;
sizez.push_back(x);
}
int a=0,b=0;
for(int e=0;e<n;e++)
	if(finger[e]>sizez[e])
		a=1;
for(int e=0;e<n;e++)
	if(finger[e]>sizez[n-e-1])
		b=1;
if(a==0 && b==0)
	cout<<"both"<<endl;
else if(a==1 && b==1)
	cout<<"none"<<endl;
else if(a==0 && b==1)
	cout<<"front"<<endl;
else
	cout<<"back"<<endl;



}








}