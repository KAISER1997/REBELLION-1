#include <bits/stdc++.h>
using namespace std;
long long  _sieve_size;  
bitset<10000010> bs;  
vector<long long> primes;  

 
 
void sieve( long long  upperbound) {  
_sieve_size = upperbound + 1;  
bs.reset(); bs.flip();  
bs.set(0, false); bs.set(1, false);  
for ( long long i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
 for (long long j = i * i; j <= _sieve_size; j += i) bs.set((size_t)j, false);
primes.push_back((long long)i);  
}
}

int main()
{
sieve(100000);
int n;
cin>>n;
for(int yy=1;yy<=n;yy++)
{
int a,b;
cin>>a>>b;
int maxx=-1;
int l=0;
for(int e=a;e<=b;e++)
{
int g=e;



 
//  int ae[333333]={0} ;
// int ae2[333333]={0} ;
 
 int p=1;
for(int t=0;primes[t]<=g && t<primes.size();t++ )
{
 
  
if(g%primes[t]==0)
{	 
	int jp=0;
while(g%primes[t]==0)
{    
	g=g/primes[t];
	jp++;
}
  p=p*(jp+1);


}
}
if(g!=1)
	p=p*2;
if(p>maxx)
{
maxx=p;
l=e;


}
 
}
printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,l,maxx);
} 
}