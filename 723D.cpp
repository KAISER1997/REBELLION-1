#include <bits/stdc++.h>
using namespace std;
 
int m,n;
int t=0;
int floodFill(char arr[999][999], int x,int y)
{
 if(arr[x][y]=='.')
 { ++t;
arr[x][y]='*';
if(x>1)
floodFill(arr,x-1,y);
if(x<n)
floodFill(arr,x+1,y);
if(y>1)
floodFill(arr,x,y-1);
if(y<m)
floodFill(arr,x,y+1);
 }
}
int main()
{
int k;
char arr[999][999];
char war[999][999];
cin>>n>>m>>k;
getchar();
for(int e=1;e<=n;e++)
{
for(int f=1;f<=m;f++)
{
arr[e][f]=getchar();
war[e][f]=arr[e][f];

}
getchar();
}

for(int e=1;e<=n;e++)
{

if(arr[e][1]=='.')
	floodFill(arr,e,1);
if(arr[e][m]=='.')
	floodFill(arr,e,m);
}
for(int r=1;r<=m;r++)
{
if(arr[1][r]=='.')
	floodFill(arr,1,r);
if(arr[n][r]=='.')
	floodFill(arr,n,r);
}
// for(int tj=1;tj<=n;tj++)
// {for(int k=1;k<=m;k++)
// 	cout<<arr[tj][k];
// cout<<endl;
// }

vector < pair< int ,pair <int ,int > > >vv;
for(int tf=1;tf<=n;tf++)
{
for(int t1=1;t1<=m;t1++)
{ t=0;
if(arr[tf][t1]=='.')
{
floodFill(arr,tf,t1);

//cout<<tf<<" "<<t1<<" "<<t<<endl;


// for(int tj=1;tj<=n;tj++)
// {for(int k=1;k<=m;k++)
// 	cout<<arr[tj][k];
// cout<<endl;
// }
vv.push_back(make_pair(t,make_pair(tf,t1)));
}
}
}






sort(vv.begin(),vv.end());
int h=0;
for(int y=0;y<vv.size()-k;y++)
{
h=h+vv[y].first;

	floodFill(war,vv[y].second.first,vv[y].second.second);


}
cout<<h<<endl;
for(int tj=1;tj<=n;tj++)
{for(int k=1;k<=m;k++)
	cout<<war[tj][k];
cout<<endl;
}











}














 