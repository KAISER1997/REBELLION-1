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
sieve(1000000);
int n;
int sev[4]={1,7,9,3};
int tr[4]={1,3,9,7};
int tw[4]={6,2,4,8};
int nn[4]={1,9,1,9};
while(1!=0)
{
cin>>n;
if(n==0)
break;
int sum=1;
int ans[1111111]={0};
for(int e=0;e<primes.size() && primes[e]<=n;e++)
{
double z=(double)log(n)/(double)log(primes[e]);
int h=z;
//cout<<primes[e]<<" "<<h<<endl;
 ans[primes[e]%10]+=h;
}
if(ans[3]!=0)
sum=sum*tr[(ans[3]%4)];
if(ans[7]!=0)
sum=sum*sev[ans[7]%4];
if(ans[9]!=0)
sum=sum*nn[ans[9]%4];
if(ans[2]!=ans[5])
{
ans[2]=ans[2]-ans[5];
sum=sum*tw[ans[2]%4];
}
cout<<sum%10<<endl;
 

}






}