#include <bits/stdc++.h>
using namespace std;
int main()
{
int Z,I,M,L,a,b,a1,b1,ans1,ans2,g=0;;
while(cin>>Z>>I>>M>>L)
{
	if(Z==0 && I==0 && M==0 && L==0)
		break;

a1=L;
b1=L;
int t=0;
while(1!=0)
{
t=t+1;

a1=(Z*a1+I)%M;

b1=(Z*b1+I)%M;
b1=(Z*b1+I)%M;

if(a1==b1)
{
break;
}
}
a1=L;
t=0;
while(1!=0)
{

if(a1==b1)	
{

ans1=t;
break;

} 
a1=(Z*a1+I)%M;

b1=(Z*b1+I)%M;
 ++t;


}
 int t1=0;
while(1!=0)
{
	++t1;
a1=(Z*a1+I)%M;;
if(a1==b1)
{
	ans2=t1;
 break;


}
}

++g;

printf("Case %d: %d\n",g,ans2);



}
}











 