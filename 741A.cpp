#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int lcm(int a, int b) { return (a * (b / gcd(a, b))); }

int root;
int lk=0;
vector<int > arr[999999];
int check[999999]={0};
int  u=0;
void DFS(int start)
{

if(check[start]==0)
{
check[start]=1;
++u;
for(int e=0;e<arr[start].size();e++)
{

if(arr[start][e]==root)
	lk=1;


DFS(arr[start][e]);

}
}
}
int main()
{

int n,q,z=0,maxx=1;
cin>>n;
for(int r=1;r<=n;r++)
{
cin>>q;
arr[r].push_back(q);
}
for(int e=1;e<=n;e++)
{
	root=e;
if(check[e]==0)
{
	lk=0;
	u=0;
DFS(e);
if(lk==0)
	z=1;
else
 {
 if(u%2==0)
 	u=u/2;
 else
 	u=u;
	maxx=lcm(maxx,u);


 }

}

}

if(z==0)
	cout<<maxx;

else
	cout<<"-1";


}