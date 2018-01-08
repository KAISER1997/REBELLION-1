#include <bits/stdc++.h>
using namespace std;

string fin(string str)
{
char prev='*';
string h;
for(int e=0;e<str.length();e++)
{
if(str[e]!=prev)
{
prev=str[e];
h+=prev;
}
}





return(h);

}





int main()
{
int j;
cin>>j;
for(int x=1;x<=j;x++)
{
int m,n;
cin>>m>>n;

string a,b;
cin>>a>>b;
a=fin(a);
b=fin(b);
//cout<<a<<" "<<b;
int arr[5001][5001]={0};
int mint=99999999;
for(int r=0;r<b.length();r++)
{
	int q=0;
  for(int e=0;e<a.length();e++)
  {
    if(a[e]==b[r])
arr[r+1][e+1]=arr[r][e]+1;
   else
   arr[r+1][e+1]=max(arr[r][e+1],arr[r+1][e]);
     

  //cout<<arr[r+1][e+1]<<" ";

  }
  //cout<<endl; 


}
mint=b.length()-arr[b.length()][a.length()]+a.length();
cout<<mint<<endl;
}

}










 