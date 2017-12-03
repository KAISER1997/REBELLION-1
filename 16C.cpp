#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int l,b,r1,r2;
 long long int f=-1;
 long long int  gcd(long long int a, long long int b) { return (b == 0 ? a : gcd(b, a % b)); }
void bin(long long int start,long long int stop)
{
if(start<=stop)
{
long long int mid=(start+stop)/2;
 if(mid%r1==0 && (mid/r1)*r2<=b)
 {	f=mid;


 	bin(mid+1,stop);

 }
 else if(mid%r1==0 && (mid/r1)*r2>b )
bin(start,mid-1);
else if(mid%r1!=0)
{
if((1+(mid/r1))*(r1)<=l && (((1+(mid/r1))*(r1))*r2)/r1<=b )
{

   f=max(f,  (1+(mid/r1))*(r1));

	bin(((1+(mid/r1))*(r1)),stop) ;


}
else  
{
   
	bin(start,mid-1);

}
}
}
}
 

int main()
{

cin>>l>>b>>r1>>r2;
long long int h=gcd(r1,r2);
r1=r1/h;
r2=r2/h;
 

 bin(1,l);
 if(f==-1)
 	cout<<"0"<<" "<<"0";
 else
 	cout<<f<<" "<<f*r2/r1;
}