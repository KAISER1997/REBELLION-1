#include <bits/stdc++.h>
using namespace std;
int main()

{

int ff;
cin>>ff;
for(int k=1;k<=ff;k++)
{

	int n;
	cin>>n;
	double price,qty,disc,ans,total=0.0,xx=0.0;
for(int t=1;t<=n;t++)
{
cin>>price>>qty>>disc;

ans=price*(10000-(disc*disc))/10000;
total+=ans*qty;
xx+=price*qty;

}

printf("%.4f\n",xx-total);




}



}