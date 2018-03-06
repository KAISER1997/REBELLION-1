#include <bits/stdc++.h>
using namespace std;

vector<long long int > arr[1111111*10] ;

vector<long long int > war;

vector<long long int > merge(vector <long long int > a,vector<long long int > b)
{
    vector<long long int > c;
    long long int e1=0,e2=0,t=0;
    while(1!=0)
    { if(a.size()==0)
    	break;
    	if(b.size()==0)
    		break;
       if(a[e1]>=b[e2])
       {

       c.push_back(a[e1]);
       ++e1;
       }
       else
       {
         c.push_back(b[e2]);
         ++e2;

       } 
       ++t;
       if(t==50 ||e1==a.size() || e2==b.size())
       	break;
        
        
    }

    if(t!=50)
    {
       if((e1==a.size() && e2!=b.size()) )
       {
          while(1!=0)
          {

               c.push_back(b[e2]);
               ++e2;
          	++t;
          	if(t==50 || e2==b.size())
          		break;
          }



       }

       else if(e1!=a.size() && e2==b.size())
       {
            while(1!=0)
          {

               c.push_back(a[e1]);
               ++e1;
          	++t;
          	if(t==50 || e1==a.size())
          		break;
          }



       }
   }
       return(c);




    }
    
    
    
    







vector<long long int > build(long long int x,long long int start ,long long int stop)
{
if(start==stop)
{    
	arr[x].push_back(war[stop]);
return(arr[x]);


}


    
    long long int mid= (start+stop)/2;
    vector<long long int > a1,a2;
    a1=build(2*x,start,mid);
    a2=build(2*x+1,mid+1,stop);
    vector<long long int > u=merge(a1,a2);
    arr[x]=u;
    return(arr[x]);
    
    
}

vector< long long int > update(long long int x,long long int start,long long int stop,long long int pos,long long int val)
{
    vector<long long int> a1,a2;
    long long int mid=(start+stop)/2;
    if(start==stop && start==pos)
    {
        
     war[start]=val;
     arr[x].clear();
     arr[x].push_back(war[start]);
     return(arr[x]);
    }
    else
    {
        if(mid>=pos)
        {a1=update(2*x,start,mid,pos,val);
        arr[x]=merge(a1,arr[2*x+1]);
        
        }
        else 
        {
            a2=update(2*x+1,mid+1,stop,pos,val);
            arr[x]=merge(arr[2*x],a2);
            
            
        }
        return(arr[x]);
        
    }
    }
vector <long long int > query(long long int x,long long int start,long long int stop,long long int qst,long long int qsp)
{
    long long int mid=(start+stop)/2;
    vector<long long int > c;
    if(qst>stop || qsp<start)
    return(c);
    
    
    
    if(start>=qst && qsp>=stop)
    return(arr[x]);

    return(merge(query(2*x,start,mid,qst,qsp),query(2*x+1,mid+1,stop,qst,qsp)));
     
}

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n,qt,z1,z2;
cin>>n>>qt;
 
for(long long int e=1;e<=n;e++)
{
	cin>>z1;
war.push_back(z1);


}
 build(1,0,n-1);

//  for(int e=1;e<=18;e++)
//  {
// for(int d=0;d<arr[e].size();d++)
// 	cout<<arr[e][d]<<" ";
// cout<<endl;


//  }
long long int a,b,c;
 
for(long long int e=1;e<=qt;e++)
{
  cin>>a>>b>>c;
long long int pm=0;
if(a==2)
{
  vector<long long int > x;
  x.clear();

  x=query(1,0,n-1,b-1,c-1);
 //cout<<x.size()<<endl;
 if(x.size()>=3)
for(long long int e=0;e<x.size()-2;e++)
{  //cout<<"die";
if(x[e]<x[e+1]+x[e+2])
	{pm=x[e]+x[e+1]+x[e+2];
break;
	}
}
cout<<pm<<endl;
}
else
{

update(1,0,n-1,b-1,c);
//  for(int e=1;e<=18;e++)
//  {
// for(int d=0;d<arr[e].size();d++)
// 	cout<<arr[e][d]<<" ";
// cout<<endl;


//  }


}

}

// vector<int > z= merge(war,war);
// for(int er=0;er<z.size();er++)
// cout<<z[er]<<endl;





}