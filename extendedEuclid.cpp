//used to find one integral soln for(x,y) in ax+by=1


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int x1;
int x2;
int yl;
int y2;


void Euclid(int a,int b)
{
 
if(b!=1)
{
Euclid(b,a%b);
if(a%b==1)
{


	x1=a;
	yl=b;
	x2=1;
	y2=-1*(a/b);
	cout<<x1<<" "<<x2<<" "<<yl<<" "<<y2<<endl;
}

else
{

int c=x2;
int d=y2;
yl=b;
x1=a;
x2=d;
y2=c+d*-1*(a/b);
	cout<<x1<<" "<<x2<<" "<<yl<<" "<<y2<<endl;

}

}
}
int main()
{

int a,b;
cin>>a>>b;
Euclid(a,b);
cout<<x2<<" "<<y2<<endl;



}