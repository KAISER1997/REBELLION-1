#include <bits/stdc++.h>
using namespace std;
char war[9999][999];
char  arr[10][10][10][10];
int main()
{
int r1=0;
	for(int t=1;t<=11;t++)
	{

if(t==4 || t==8)
	{getchar();
continue;
	}
else
++r1;

int l1=0;
for(int r=1;r<=12;r++)
{
if(r==4 || r==8 || r==12)
	getchar();
else
{
++l1;

war[r1][l1]=getchar();
}
}
}

for(int t=1;t<=3;t++)
for(int t1=1;t1<=3;t1++)
arr[1][1][t][t1]=war[t][t1];

for(int t=1;t<=3;t++)
for(int t1=4;t1<=6;t1++)
arr[1][2][t][t1-3]=war[t][t1];

for(int t=1;t<=3;t++)
for(int t1=7;t1<=9;t1++)
arr[1][3][t][t1-6]=war[t][t1];

for(int t=4;t<=6;t++)
for(int t1=1;t1<=3;t1++)
arr[2][1][t-3][t1]=war[t][t1];

for(int t=4;t<=6;t++)
for(int t1=4;t1<=6;t1++)
arr[2][2][t-3][t1-3]=war[t][t1];

for(int t=4;t<=6;t++)
for(int t1=7;t1<=9;t1++)
arr[2][3][t-3][t1-6]=war[t][t1];

 for(int t=7;t<=9;t++)
for(int t1=1;t1<=3;t1++)
arr[3][1][t-6][t1]=war[t][t1];

 for(int t=7;t<=9;t++)
for(int t1=4;t1<=6;t1++)
arr[3][2][t-6][t1-3]=war[t][t1];

 for(int t=7;t<=9;t++)
for(int t1=7;t1<=9;t1++)
arr[3][3][t-6][t1-6]=war[t][t1];

int a,b;
cin>>a>>b;
int c1;
int c2;
if(a%3==0)
c1=a/3;
else
c1=1+(a/3);
if(b%3==0)
c2=b/3;
else
c2=1+(b/3);
int f1=a-(c1-1)*3;
int f2=b-(c2-1)*3;
int q=0;
for(int e=1;e<=3;e++)
{

for(int f=1;f<=3;f++)
{

	if(arr[f1][f2][e][f]=='.')
	{
      q=1;
	}
}
}
int st1=((f1-1)*3)+1;
int st2=((f2-1)*3)+1;
if(q==1)
{
for(int r=st1;r<=st1+2;r++)
{
for(int f=st2;f<=st2+2;f++)
{
	if(war[r][f]=='.')
war[r][f]='!';


}

}


}
else
{
for(int r=1;r<=9;r++)
{
for(int f=1;f<=9;f++)
{
	if(war[r][f]=='.')
war[r][f]='!';


}

}


}




 r1=0;
	for(int t=1;t<=11;t++)
	{

if(t==4 || t==8)
	{cout<<endl;
continue;
	}
else
++r1;

int l1=0;
for(int r=1;r<=12;r++)
{
if(r==4 || r==8 )
	cout<<" ";
else if(r==12)
	cout<<endl;
else
{
++l1;

cout<<war[r1][l1];
}
}
}



}





 











 