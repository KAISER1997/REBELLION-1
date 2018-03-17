#include <bits/stdc++.h>
using namespace std;
int main()
{
double D,V;
while(cin>>D>>V)
{
	if(D==0 && V==0)
		break;
double pi=acos(-1);
double d3=(D*D*D)-(6.0/(1.0*pi))*V;
//cout<<d3<<endl;
double d=pow(d3,1.0/3.0);
 std::cout << std::fixed;
    std::cout << std::setprecision(3);

cout<<d<<endl;



}


}