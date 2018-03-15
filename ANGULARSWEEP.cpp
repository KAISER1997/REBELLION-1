#include <bits/stdc++.h>
using namespace std;
 
 
double EPS=1e-7;
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


//P be a point vector
 

 
 

double dist(point p1, point p2) {
// hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
return hypot(p1.x - p2.x, p1.y - p2.y); }
// return double

vector< pair<double,int > > angle(vector<point > pp, point X,double r)
{
double A,B;
vector<pair<double,int > > anglez;
for(int i=0;i<pp.size();i++)
{
	if(pp[i].x==X.x && pp[i].y==X.y)
		continue;
B=acos(dist(X,pp[i])/(2*r));
A=atan((pp[i].y-X.y)/(pp[i].x-X.x));
double enter,exit;//ANTICLOCKWISE MOVEMENT OF CIRCLE ABOUT X
enter=A-B;
exit=A+B;

anglez.push_back(make_pair(enter,1));
anglez.push_back(make_pair(exit,-1));

}

return(anglez);

}


int sizez(vector<point > pp, point X,double r)
{
vector< pair<double,int > > w=angle(pp,X,r);
sort(w.begin(),w.end());
int countt=0;
int maxx=-11111111;
for(int e=0;e<w.size();e++)
{
if(w[e].second==-1)
	countt-=1;
else
	countt+=1;

maxx=max(maxx,countt);
}
return(maxx);

}

int main()
{

int n,r;
cin>>n>>r;
vector<point > ww;
for(int rc=0;rc<n;rc++)
{
double a,b;
cin>>a>>b;
ww.push_back(point(a,b));
}
int s,sf=-1;
for(int e=0;e<n;e++)
{
s=sizez(ww,ww[e],r);
sf=max(sf,s);


}


cout<<sf+1<<endl;


}