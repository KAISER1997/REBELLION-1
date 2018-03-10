#include <bits/stdc++.h>
using namespace std;
double pi = acos(-1.0);
int main()
{
double l,h,theta,w,vol;
while(cin>>l>>w>>h>>theta)
{
	if (l==0)
		break;
	if(tan(theta*pi/180.0)<=h/l)
  vol=l*h*w-(l*l*tan(theta*pi/180.0)*w)/2;
else 
  vol=w*h*h*(1/tan(theta*pi/180.0))/2;

std::cout << std::fixed;
    std::cout << std::setprecision(3);
cout<<vol<<" mL"<<endl;
}
}