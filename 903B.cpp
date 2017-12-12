#include <bits/stdc++.h>
using namespace std;
int main()
{

vector<int > arr;
int a1,a2,h1,h2,c1;
cin>>h1>>a1>>c1;
cin>>h2>>a2;
while(h2>0)
{


if(h1>a2 || a1>=h2)
{
arr.push_back(1);
h2=h2-a1;

}
else
{
h1=h1+c1;
arr.push_back(-1);
}


h1=h1-a2;



}
cout<<arr.size()<<endl;

for(int e=0;e<arr.size();e++)
{
if(arr[e]==-1)
	cout<<"HEAL"<<endl;
else
	cout<<"STRIKE"<<endl;


}
}









