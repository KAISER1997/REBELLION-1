#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
int r=0;
while(n!=0)
{
	 
	++r;
	n=n/10;


}


return(r);


}




int f(int x)
{
	vector< int > arr;
int a1=4;
int n=4;
int a2=count(x*x);
//cout<<a1<<" "<<a2;
int z=x*x;
while(z!=0)
{
arr.push_back(z%10);
z=z/10;
}
reverse(arr.begin(),arr.end());
 
int w=8-a2;
 
for(int e=0;e<=w;e++)
arr.insert(arr.begin(),0);

// for(int e=0;e<=8;e++)
// 	cout<<">"<<arr[e];
int ev=4,sum=0;
for(int e=3;e<=6;e++)
{
//cout<<e<<endl;

 --ev;
sum+=pow(10, ev)* arr[e];
 


}
return(sum);



}








int mf;
int floydCycleFinding(int x0) { // function int f(int x) is defined earlier
// 1st part: finding k*mu, hare’s speed is 2x tortoise’s
int tortoise = f(x0), hare = f(f(x0));
// f(x0) is the node next to x0
while (tortoise != hare) { tortoise = f(tortoise); hare = f(f(hare)); }
// 2nd part: finding mu, hare and tortoise move at the same speed
int mu = 0; hare = x0;
while (tortoise != hare) { tortoise = f(tortoise); hare = f(hare); mu++;}
// 3rd part: finding lambda, hare moves, tortoise stays
int lambda = 1; hare = f(tortoise);
while (tortoise != hare) { hare = f(hare); lambda++; }
mf=lambda;
return mu;

}

int main()
{
int n;
while(1!=0)
{
cin>>n;
if(n==0)break;
cout<< floydCycleFinding(n)+mf<<endl;


}


}