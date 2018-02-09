#include <bits/stdc++.h>
using namespace std;
int main()
{
double ncar,ncow,nshow;
while(cin>>ncow>>ncar>>nshow)
{
int door=ncar+ncow;
double fc1=(double)(ncow/door)*(ncar)/(door-nshow-1);
double fc2=(double)(ncar/door)*(ncar-1)/(door-nshow-1);
std::cout << std::setprecision(5);


 std::cout << std::fixed;
cout<<fc1+fc2<<endl;


}












}