#include <bitset>  
#include <bits/stdc++.h>
using namespace std;
int _sieve_size;  
bitset<10000010> bs;  
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

sieve(40000);



while(1!=0)
{
	int sum=1;
 
int a;
int e=0;
int f=0;
while(cin>>a)
{
if(a==0)
	break;
if(e%2==0)
f=a;
else
sum=sum*pow(f,a);

++e;
if(getchar()!=' ')
	break;
}

 int g=sum-1;
vector<int > ww;
 int ae[99999]={0};
 

for(int t=0;primes[t]<=g && t<primes.size();t++ )
{
 
if(g%primes[t]==0)
	ww.push_back(primes[t]);
while(g%primes[t]==0)
{    
	g=g/primes[t];
	ae[primes[t]]++;
}


if(g==1)
break;

}
int it;
if(a==0)
break;
for(it =ww.size()-1;it>=0;it--)
{cout<<ww[it]<<" "<<ae[ww[it]];
if(it!=0)
	cout<<" ";

}
cout<<endl;

}
}






 



 