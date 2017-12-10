#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n,k;
cin>>n>>k;
  int h=sqrt(n-k);
  int z=0;
if(n!=k  && n>=k  )
for(  int y=1;y<=h;y++)
 if((n-k)%y==0 && y>k && ((n-k)/y)>k && y!=((n-k)/y))
 	{z=z+2;
 
 	}
  else if((n-k)%y==0 && ((y>k) || (n-k)/y >k  ))
  {	++z;
 

}
 if(n==k)
 	cout<<"infinity";
 else
 	cout<<z;








}