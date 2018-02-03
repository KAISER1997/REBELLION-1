#include <bits/stdc++.h>
using namespace std;
long long int x,y,d;
void extendedEuclid(long long int a, long long int b) {
if (b == 0) { x = 1; y = 0; d = a; return; }
extendedEuclid(b, a % b);
long long int x1 = y;
long long int y1 = x - (a / b) * y;
x = x1;
y = y1;
}


//gcd
long long int gcd(long long int u, long long int v)
{
    return u%v==0?v:gcd(v,u%v);
}
int main()
{
long long int tot,dv,start,stop;
while(1!=0)
{
cin>>tot;
if(tot==0)
break;
long long int c1,c2,n1,n2,pn1,pn2;
cin>>c1>>n1;
cin>>c2>>n2;
long long int t1=gcd(n1,n2);
 n1=n1/t1;
n2=n2/t1;
 

long long int zf=0;
 
if(tot%t1==0)
extendedEuclid(n1,n2);
else
zf=1;
tot=tot/t1;
x=x*tot;
y=y*tot;
 
dv=gcd(n1,n2);
// pn1= n1/dv;
// pn2= n2/dv;
 //cout<<x<<" "<<y<<" "<<pn1<<" "<<pn2<<endl;
start= ceil(-(double)x/n2) ;
stop=floor((double)y/n1);
 //cout<<start<<" "<<stop<<endl;
long long int hx1=x+(n2*( start) );
long long int hy1=y-(n1*start) ;

long long int hx2=x+(n2*stop);
long long int hy2=y-(n1*stop); 
  //cout<<hx1<<" "<<hy1<<endl;
// cout<<hx2<<" "<<hy2<<endl;
if(zf==1 || stop<start)
	cout<<"failed"<<endl;
else if(c1*hx1+c2*hy1<=c1*hx2+c2*hy2)
 cout<<hx1<<" "<<hy1<<endl;
else
cout<<hx2<<" "<<hy2<<endl;

 
}

}