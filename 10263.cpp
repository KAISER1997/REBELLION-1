#include <bits/stdc++.h>
using namespace std;

double EPS=0.000000000001;

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
struct vec { double x, y; // name: ‘vec’ is different from STL vector
vec(double _x, double _y) : x(_x), y(_y) {} };
vec toVec(point a, point b) {
// convert 2 points to vector a->b
return vec(b.x - a.x, b.y - a.y); }
vec scale(vec v, double s) {
return vec(v.x * s, v.y * s); }
// nonnegative s = [<1 .. 1 .. >1]
// shorter.same.longer
point translate(point p, vec v) {
// translate p according to v
return point(p.x + v.x , p.y + v.y); }

double dot(vec a, vec b) { return (a.x * b.x + a.y * b.y); }
double norm_sq(vec v) { return v.x * v.x + v.y * v.y; }

 
 


 

 double distToLine(point p, point a, point b, point &c) 
 {
double u=dot(toVec(a,p),toVec(a,b))/ (norm_sq(toVec(a,b)));
  c=translate(a,scale(toVec(a,b),u));
double d=dist(p,c);
return(d);
 }

 double distToLineSegment(point p, point a, point b, point &c) 
 {
 	vec ap=toVec(a,p); vec ab=toVec(a,b); vec bp=toVec(b,p);
 	double u=dot(ap,ab)/norm_sq(ab);
  

if (u > 1.0) { c = point(b.x, b.y);
      return dist(p, b); }
else if(u<0.0)
	  { c = point(a.x, a.y);
        return dist(p, a); }
return(distToLine(p,a,b,c));


}

int main()
{
double x,y;
int n;
while(scanf("%lf\n%lf\n%d", &x, &y, &n) != EOF)
{   point p,c;
 p=point(x,y);
	if(p.x==-77 && p.y==-77)
		break;
	 
 double minr=999999999999999999.0;
 
vector<point > pp;
pp.clear();
for(int e=1;e<=n+1;e++)
{
int a,b;
cin>>a>>b;
pp.push_back(point(a,b));
}
point x;
 
for(int e=0;e<n;e+=1)
{
double op=distToLineSegment(p,pp[e],pp[e+1],x);
if(minr>op)
{

minr=op;
c=x;

}


}
  std::cout << std::fixed;
    std::cout << std::setprecision(4);
cout<<c.x<<endl<<c.y<<endl;


}




}


 







 