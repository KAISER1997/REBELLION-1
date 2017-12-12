#include <bits/stdc++.h>
using namespace std;

int sum(int bin[9999],int n)
{
int q=0;
while(n!=0)
{
q=q+bin[n];
n=n-(n&-n);
}
return(q);
}

void update(int bin[9999],int x,int size)
{
while(x<=size)

{

bin[x]+=1;

x=x+(x&-x);

}
}


int countt( int maxx, int arr[9999],int n)
{


	int bin[9999]={0};
int r=0;
for(int u=n-1;u>=0;u--)
{
r=r+sum(bin,arr[u]-1);
update(bin,arr[u],maxx);
}
return(r);
}

int main()
{


int n,arr[9999]={0};
cin>>n;
int maxx=-1;;
for (int h=0;h<n;h++)
	{cin>>arr[h];
      maxx=max(maxx,arr[h]);

	}
//cout<<maxx;
cout<<countt(maxx,arr,n);



}