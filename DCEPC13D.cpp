#include <bits/stdc++.h>
using namespace std;

 long long int _sieve_size;  
bitset<1000001110> bs;  
vector< long long int> primes;  

 
 
void sieve( long long int  upperbound) {  
_sieve_size = upperbound + 1;  
bs.reset(); bs.flip();  
bs.set(0, false); bs.set(1, false);  
for ( long long int  i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
 for ( long long int j = i * i; j <= _sieve_size; j += i) bs.set((size_t)j, false);
primes.push_back(( long long int)i);  
}
}


vector< long long int > LucaBase( long long int n, long long int base)
{

 long long int u=n;
vector< long long int >pp;
pp.clear();
while(u>0)
{
pp.push_back(u%base);
u=u/base;
}
 return(pp);

}
//pascal triangle
 long long int ncrModp( long long int n, long long int r, long long int p)
{
 long long int value[999]={0};
value[0]=1;
for( long long int e=1;e<=n;e++)
{
for( long long int f=e;f>0;f--)
{
value[f]=(value[f]+value[f-1])%p;
 //cout<<value[f]<<" ";
}
// cout<<endl;
}
return(value[r]);

}
 long long int lucasans(vector< long long int > a1,vector< long long int > a2, long long int modu)
{
	 long long int p=1;
for( long long int e=0;e<a1.size();e++)
{
	if(a1[e]<a2[e] && e<a2.size())
		{   return(0);

		}
if(e<a2.size())
p=(p*(ncrModp(a1[e],a2[e],modu))%modu);
else
p=(p*(1 ))%modu;	


}
return(p);
}
 long long int lucas( long long int n, long long int r, long long int p)
{
vector< long long int> a1;
vector< long long int > a2;
a1.clear();
a2.clear();
a1=LucaBase(n,p);  
a2=LucaBase(r,p);

 long long int z=lucasans(a1,a2,p);
return(z);






}





 long long int x=0,y=0;
void extendedEuclid( long long int a,  long long int b) {
if (b == 0) { x = 1; y = 0;   return; }
extendedEuclid(b, a % b);
 long long int x1 = y;
 long long int y1 = x - (a / b) * y;
x = x1;
y = y1;
}

 long long int InverseModulo( long long int a , long long int modw)
{
extendedEuclid(a,modw);
if(x<0) return(modw+x);
return(x );



}






 long long int CRT( long long int n, long long int r, long long int modu)
{
vector < long long int> p;
p.clear();
 long long int u=1;
for( long long int e=0;primes[e]<=50;e++)
	if(modu%primes[e]==0)
		{p.push_back(primes[e]);
             u*=primes[e];
        }
 long long int s=0;

for( long long int e=0;e<p.size();e++)
{
	  
	 long long int t=lucas(n,r,p[e])%modu;
 s+=((((t) )*(InverseModulo(u/p[e],p[e])%modu)*(u/p[e])%modu))%modu;
 //lucas(n,r,p[e]);
    //cout<<n<<" "<<r<<" "<<" "<<p[e]<<" "<<t<<endl ;
//cout <<x<<" "<<y<<" "<<  (InverseModulo(u/p[e],p[e]) )<<endl;

}
return(s%modu);

 
}

  int main()
{
	sieve(1000 );
 long long int a,b,c;
 long long int ne;
cin>>ne;
for( long long int y=1;y<=ne;y++)
{
cin>>a>>b>>c;


 cout<<CRT(a,b,c)<<"\n";
}
  //cout<<ncrModp(a,b,c);





}


 



 
















 




 