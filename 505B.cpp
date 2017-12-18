#include <bits/stdc++.h>
using namespace std;

 int fp(int parent[999][999],int colour,int x)

{
 if(parent[colour][x]==0)
 	return(x);
 else
 	return(fp(parent,colour,parent[colour][x]));
}

void unionz(int parent[999][999],int colour,int x1,int x2)
{

int p1=fp(parent,colour,x1);
int p2=fp(parent,colour,x2);
if(p1!=p2)
parent[colour][p2]=p1;

 
}










int main()
{
	int n,edges;
cin>>n>>edges;

int parent[999][999];
 
 
for(int u=0;u<edges;u++)
{
int a,b,c;
cin>>a>>b>>c;
 
unionz(parent,c,a,b);
}

 
int query;
cin>>query;
for(int u=1;u<=query;u++)
{
	int a,b;
	cin>>a>>b;
	int tot=0;
for(int v=1;v<=edges;v++)
{
if(fp(parent,v,a)==fp(parent,v,b))
	++tot;


}

cout<<tot<<endl;




}

}

 