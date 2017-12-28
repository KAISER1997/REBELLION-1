#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<string > arr1;
vector<string > arr2;
vector<string > arr3;
string str1,str2;
cin>>str1>>str2;
string h="";
for(int r=0;r<str1.length();r++)
{
 
 
	h=h+str1[r];
	//cout<<h<<endl;
arr1.push_back(h);
}
 h="";
for(int r=0;r<str2.length();r++)
{
 
 
	h=h+  str2[r];
arr2.push_back(h);
}

for(int t=0;t<str1.length();t++)
	for(int t2=0;t2<str2.length();t2++)
		arr3.push_back(arr1[t]+arr2[t2]);


sort(arr3.begin(),arr3.end());
cout<<arr3[0];




}