#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int e=1;e<=n;e++)
{
string s;
cin>>s;
int t=0;

for(int e=0;e<s.length();e++)
{ 
	int arr[200]={0};
for(int r=e;r<=e+3 && r<s.length();r++)
{
arr[s[r]]+=1;

}
if(arr[99]==1 && arr[104]==1 && arr[101]==1 && arr[102]==1)
	++t;

}
if(t==0)
	cout<<"normal"<<endl;
else
	cout<<"lovely "<<t<<endl;


}





}