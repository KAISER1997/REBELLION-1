#include <bits/stdc++.h>
using namespace std;
double pi = acos(-1.0);
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
struct line { double a, b, c; };

line P1m1(point w,line l1)
{
line l2;
l2.a=-1*l1.b;
l2.b=l1.a;
l2.c=l1.b*w.x-l1.a*w.y;
if(l2.b!=0)
{
l2.a=l2.a/l2.b;
l2.c=l2.c/l2.b;
l2.b=1;

}

return(l2);
}
line pointsToLine(point p1, point p2 ) {
	line l;
if (fabs(p1.x - p2.x) < EPS) {
l.a = 1.0;
l.b = 0.0;
l.c = -p1.x;
} else {
l.a = -(double)(p1.y - p2.y) / (p1.x - p2.x);
l.b = 1.0;
l.c = -(double)(l.a * p1.x) - p1.y;
}
return(l); }


point LineIntersect(line l1, line l2 ) {
 point p;
// no intersection
// solve system of 2 linear algebraic equations with 2 unknowns
p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);
// special case: test for vertical line to avoid division by zero
if (fabs(l1.b) > EPS) p.y = -(l1.a * p.x + l1.c);
else
p.y = -(l2.a * p.x + l2.c);
return p; }

point Circumcentre(point a,point b,point c)
{
	point abm,bcm;
	abm.x=(a.x+b.x)/2;
	abm.y=(a.y+b.y)/2;
    bcm.x=(b.x+c.x)/2;
    bcm.y=(b.y+c.y)/2;
    line ab=(pointsToLine(a,b));
    line bc=(pointsToLine(b,c));
line l1=P1m1(abm,ab);
line l2=P1m1(bcm,bc);
point Cir=LineIntersect(l1,l2);
return(Cir);
}

vector<point > GOD(point a,point z1,double r,int np)
{
	vector<point > ww;
	double e=2*pi/np;
double m=z1.x-a.x;
double n=z1.y-a.y;
point ev;
for(int t=0;t<np;t++)
{
double cosTheta=cos(t*e);
double sinTheta=sin(t*e);
ev.x=m*cosTheta-n*sinTheta+a.x;
ev.y=m*sinTheta+n*cosTheta+a.y;
ww.push_back(ev);

}

return(ww);


}

int main()
{
point a,b,c;
int n,bv=0;
while(cin>>n)
{++bv;
	if(n==0)
		break;
cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
double maxX=-9999999,minX=99999,maxY=-999999,minY=999999;
point circ=Circumcentre(a,b,c);
//cout<<circ.x<<" "<<circ.y<<endl;
double R=dist(a,circ);
vector<point > V=GOD(circ,a,R,n);
for(int t=0;t<V.size();t++)
{

minX=min(minX,V[t].x);
minY=min(minY,V[t].y);
maxX=max(maxX,V[t].x);
maxY=max(maxY,V[t].y);

}
printf("Polygon %d: ",bv);
 std::cout << std::fixed;
    std::cout << std::setprecision(3);

cout<<(maxY-minY)*(maxX-minX)<<endl;


}


}