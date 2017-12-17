#include <bits/stdc++.h>
using namespace std;

int modu(int r)
{
if(r<0)
	return(r*-1);
else
	return(r);

}


int main()
{
int n;
cin>>n;
int l=0,r=0;
vector <int > left;
for(int j=n;j>=1;j--)
{
if(l<=r)
{
l=l+j;
left.push_back(j);

}
else
{

r=r+j;


}
}
cout<<modu(l-r)<<endl;
cout<<left.size()<<" ";
for(int r=0;r<left.size();r++)
	cout<<left[r]<<" ";
}












 