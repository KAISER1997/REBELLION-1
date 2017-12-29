#include <bitset>  
#include <bits/stdc++.h>
using namespace std;
int _sieve_size;  
bitset<1000001110> bs;  
vector<int> primes;  

 
 
void sieve(int  upperbound) {  
_sieve_size = upperbound + 1;  
bs.reset(); bs.flip();  
bs.set(0, false); bs.set(1, false);  
for (int  i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
 for (int j = i * i; j <= _sieve_size; j += i) bs.set((size_t)j, false);
primes.push_back((int)i);  
}
}
int main()
{

sieve(46341);

int m,n,lg=0;
while(cin>>n>>m)
{
if(m==0 && n==0)
	break;
 
 
vector<int > ww;
//  int ae[333333]={0} ;
// int ae2[333333]={0} ;
int g=m;
vector<int > kk;
for(int t=0;primes[t]<=g && t<primes.size();t++ )
{
 
if(g%primes[t]==0)
{	ww.push_back(primes[t]);
	int jp=0;
while(g%primes[t]==0)
{    
	g=g/primes[t];
	jp++;
}
kk.push_back(jp);
//cout<<primes[t]<<" "<<jp<<endl;

}
if(g==1)
	break;



if(g!=1  && t==primes.size()-1)
	{ww.push_back(g);
      kk.push_back(1);
	}
//ae[g]+=1;
 
 }
int rv=0;
 for(int t=0;t<ww.size();t++)
 {
int e=ww[t];
int u=n;
int tv=0;
int z=1;
while(u>=e)
{
int f=pow(e,z);
++z;
tv+=n/f;
u=u/e;
}

if(tv<kk[t])
	rv=1;
//cout<<tv<<endl;
	 



}
if(rv==1)
printf("%d does not divide %d!\n",m,n);
else
printf("%d divides %d!\n",m,n);



}
 }