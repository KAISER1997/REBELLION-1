#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<int > arr;
vector<int > war;
arr.push_back(0);
for(int e=1;e<=12;e++)
	arr.push_back(31);
arr[2]=28;
arr[4]=30;
arr[6]=30;
arr[9]=30;
arr[11]=30;
int n;
cin>>n;

for(int e=0;e<n;e++)
{
int j;
cin>>j;
war.push_back(j);
}
int z=0;


for(int l=1;l<=12;l++)
{
int jp=l;
int v=0;
int lp=0;
	for(int e=0;e<n;e++)
{
 if(!((arr[jp]==war[e]) || (arr[jp]==28 && war[e]==29)))
 	{
     v=1;
 	}
 if(war[e]==29)
 	++lp;

++jp;
if(jp==13)
jp=1;
}

if(v==0 && lp<2)
{
z=1;
break;

}

}

if(z==0)
	cout<<"NO";
else
	cout<<"YES";
}











