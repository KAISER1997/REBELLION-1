#include <bits/stdc++.h>
#include <sstream>
using namespace std;

long long int checkz(int u)
{
long long int d=0;
long long int nn=0;
while(u!=0)
{

++d;
if(u%10!=9)
nn=1;
u=u/10;
}
if(nn==0)
	return(d);
else
	return(d-1);

}

long long int giveme(long long int k)
{
string s="";
for(long long int e=0;e<k;e++)
	s=s+to_string(9);

 
stringstream geek(s); 
  long long int x = 0; 
geek >> x;

return(x);


}














int main()
{

long long int n,op=0;
cin>>n;
long long int sum=n+(n-1);
long long int l=checkz(sum);
long long int j=giveme(l);
 

vector <long long int > uu;
map <long long int,int > mp;
for(long long int t=0;t<=8;t++)
{
long long int s=j+t*pow(10,l);
 uu.push_back(s);
 //cout<<s<<endl;
mp[s]=1;
}
for(long long int e=uu.size()-1;e>=0;e--)
	{ 
 

 if((2*n-1)>=uu[e])
 {
long long int z=uu[e]-n;

if(z>0 && uu[e]>(2*z))
{
long long int hh=1+(uu[e]-(2*z))/2;
op+=hh;
//cout<<hh<<endl;
}
else if(z<=0)
{

op+=(uu[e]-1)/2;
//cout<<(uu[e]-1)/2<<endl;
}
     
	}
 }
if(2*n-1>=9)
cout<<op;
else
cout<<(n*(n-1))/2;




}