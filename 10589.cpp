#include <bits/stdc++.h>
using namespace std;
float EPS=0.000000000001;
struct point { double x, y;
point() { x = y = 0.0; }
point(double _x, double _y) : x(_x), y(_y) {}
bool operator < (point other) const {  
if (fabs(x - other.x) > EPS)
return x < other.x;
return y < other.y; } 

bool operator == (point other) const {
return (fabs(x - other.x) < EPS && (fabs(y - other.y) < EPS));
}



};

double dist(point p1, point p2) {
// hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
return hypot(p1.x - p2.x, p1.y - p2.y); }


int main()
{
double   n,a;
while(cin>>n>>a)
	{if(n==0 && a==0)
		break;
point A(0,0),B(0,a),C(a,0),D(a,a);
double er=0;
for(int e=1;e<=n;e++)
{
double x,y;
cin>>x>>y;
point V(x,y);
//cout<<dist(A,V)<<" "<<dist(B,V)<<" "<<dist(C,V)<<" "<<dist(D,V)<<endl;
if((dist(A,V)<=a) && (dist(B,V)<=a) && (dist(C,V)<=a) && (dist(D,V)<=a))
	{++er;
//cout<<"die";
	}
}
//cout<<er;
double AV = er*a*a/n;
 std::cout << std::fixed;
    std::cout << std::setprecision(5);
cout<<AV<<endl;

}
}