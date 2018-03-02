#include <bits/stdc++.h>
using namespace std;
double EPS=0.0000000001;
struct point { double x, y;
point() { x = y = 0.0; }
point(double _x, double _y) : x(_x), y(_y) {}
bool operator < (point other) const {  
if (fabs(x - other.x) > EPS)
return x < other.x;
return y < other.y; }};
double modu(double z)
{

	if(z<0) return(-1*z);
	else return(z);
} 


int main()
{

	int zz;
	cin>>zz;
	for(int tg=1;tg<=zz;tg++)
	{
int n;
cin>>n;
int a,b;
vector<point > pp;
for(int t=0;t<n;t++)
{
cin>>a>>b;
pp.push_back(point(a,b));
}

sort(pp.begin(),pp.end());
double ref=0.0;
 
	 
    

 double tot=0;
for(int f=n-2;f>=0;f-=1)
{
	//cout<<pp[f].x<<" "<<pp[f].y<<endl;
if(pp[f].y>ref)
{
	double theta=atan((pp[f].y-pp[f+1].y)/(pp[f].x-pp[f+1].x));

double z=pp[f].y-ref;
double zv=modu(z/sin(theta));
tot+=zv;

ref=pp[f].y;

}



}

  printf("%.2f\n", tot); 
 




}
}