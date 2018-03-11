#include <bits/stdc++.h>
using namespace std;
int main()
{

int j;
cin>>j;
for(int e=1;e<=j;e++)
{
vector<int > arr;
int n;
cin>>n;
for(int e=0;e<n;e++)
{
int f;
cin>>f;
arr.push_back(f);

}
int wq[111111]={0};
for(int e=0;e<arr.size();e++)
{
	int tot1=0,tot2=0;
for(int t=e-1;t>=0;t--)
{
	if(arr[e]>=tot1)
{tot1+=arr[t];

wq[t]+=1;
}
else
break;
}

for(int t=e+1;t<arr.size();t++)
{
	if(arr[e]>=tot2)
{tot2+=arr[t];

wq[t]+=1;
}
else
break;


}





}

for(int e=0;e<arr.size();e++)
cout<<wq[e]<<" ";
cout<<endl;

}
}