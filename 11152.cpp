#include <bits/stdc++.h>
using namespace std;
double pi = acos(-1.0);
double area(double a,double b,double c)
{     double s;
     s=(a+b+c)/2;
	double ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
double rCircumCircle(double a, double b, double c) {
return a*b*c / (4.0 * area(a, b, c)); }

double rIncircle(double a, double b, double c)
{
     double s;
     s=(a+b+c)/2;
     return(area(a, b, c)/s);
}
double AreaCircle(double r)
{
	return(pi*r*r);
}

int main()
{

double a,b,c,z1,z2,z3;
while(cin>>a>>b>>c)
{
double rArea=AreaCircle(rIncircle(a,b,c));
double tri=area(a,b,c);
double Rarea=AreaCircle(rCircumCircle(a,b,c));
z1=rArea;
z2=tri-z1;
z3=Rarea-tri;
 std::cout << std::fixed;
    std::cout << std::setprecision(4);
cout<<z3<<" "<<z2<<" "<<z1<<endl;
}

}








