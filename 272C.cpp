#include <bits/stdc++.h>
using namespace std;


vector<long long int > arr;
 long long int lazy[1111111]={0};
long long int store[1111111]={0};
long long int n;
void build(long long int x,  int start,  int stop)
{
long long int mid=(start+stop)/2;


if(start==stop)
    store[x]=arr[start];
else
{
build(2*x,start,mid);
build(2*x+1,mid+1,stop);
store[x]=max(store[2*x],store[2*x+1]);
}
}

void update(long long int x,  int qst,  int qsp,  int start,  int stop,long long int value)
{
      int mid=(start+stop)/2;
 if(qst>stop || start>qsp)
    {   
         if(lazy[x]!=0)
    {
    store[x]= lazy[x];
    lazy[2*x]=lazy[x];
    lazy[2*x+1]= lazy[x];
    lazy[x]=0;
 }



        return;



    }
 if(qst<=start && qsp>=stop)
    { store[x]=value;
        lazy[2*x]=value;
        lazy[2*x+1]=value;


    }
 else
 {   if(lazy[x]!=0)
    {
    store[x]= lazy[x];
    lazy[2*x]=lazy[x];
    lazy[2*x+1]= lazy[x];
    lazy[x]=0;
 }
update(2*x,qst,qsp,start,mid,value);
update(2*x+1,qst,qsp,mid+1,stop,value);
store[x]=max(store[2*x],store[2*x+1]);

 }
}

long long int query(long long int x,  int qst,  int qsp,  int start,  int stop)
{   int mid=(start+stop)/2;
 if(qst>stop || start>qsp)
    return(0);
  if(qst<=start && qsp>=stop)
    {  if(lazy[x]!=0)
        {
             store[x]=lazy[x];
             lazy[2*x]=lazy[x];
             lazy[2*x+1]=lazy[x];
             lazy[x]=0;

        }
return(store[x]);

    }
    else
    {
         if(lazy[x]!=0)
    {
    store[x]=lazy[x];
    lazy[2*x]=lazy[x];
    lazy[2*x+1]= lazy[x];
    lazy[x]=0;
    }
    long long int q1= query(2*x,qst,qsp,start,mid);
    long long int q2= query(2*x+1,qst,qsp,mid+1,stop);
    long long  int uu=max(q1,q2);
     return(uu);



    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


cin>>n;
arr.push_back(-1);
for(  int u=1;u<=n;u++)
{    int op;
    cin>>op;
    arr.push_back(op);
}

build(1,1,n);
  int queryt,a,b;
cin>>queryt;
for(long long int q=1;q<=queryt;q++)
{
cin>>a>>b;
long long int z=query(1,1,a,1,n);
cout<<z<<endl;
update(1,1,a,1,n,z+b);




}

}












