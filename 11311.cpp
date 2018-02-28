#include <bits/stdc++.h>
using namespace std;
int qr1,qr2,cr1,cr2;
 int arr[50][50][50][50][3]={0};
 ///map<int ,map<int ,map<int ,map<int ,map<int,int > > > > > arr;

int recur( int r1,int r2,int c1,int c2,int z)
{
	//cout<<arr[r1][r2][c1][c2];
	//cout<<z;
	if(arr[r1][r2][c1][c2][z]!=0)
		return(arr[r1][r2][c1][c2][z]);
if(r2-r1==1 && c2-c1==1)
	return(z*-1);
for(int f=1+r1;f<=r2-1;f++)
{
int vv;
if(f<=qr1)
{
	if(arr[f][r2][c1][c2][z*-1]==0)
 { 
 	vv=recur(f,r2,c1,c2,z*-1);

arr[f][r2][c1][c2][z*-1]=vv;

 }
 else 
 	vv=arr[f][r2][c1][c2][z*-1];
 
}

else
{
	if(arr[r1][f][c1][c2][z*-1]==0)
	{
vv=recur(r1,f,c1,c2,z*-1);
arr[r1][f][c1][c2][z*-1]=vv;
}
else
vv=arr[r1][f][c1][c2][z*-1];
}
if(vv==z)
	return(arr[r1][r2][c1][c2][z]= z);

}
for(int f=1+c1;f<=c2-1;f++)
{
int vv;
if(f<=cr1)
{
	if(arr[r1][r2][f][c2][z*-1]==0)
	{
  vv=recur(r1,r2,f,c2,z*-1);
arr[r1][r2][f][c2][z*-1]=vv;
}
else
vv=arr[r1][r2][f][c2][z*-1];
 
}

else
{
	if(arr[r1][r2][c1][f][z*-1]==0)
	{
vv=recur(r1,r2,c1,f,z*-1);
arr[r1][r2][c1][f][z*-1]=vv;
}
else
vv=arr[r1][r2][c1][f][z*-1];
}

if(vv==z)
	return(arr[r1][r2][c1][c2][z]= z);



}

return(arr[r1][r2][c1][c2][z]= z*-1);



}
int main()
{

int m,n,x,y;
int lv;
cin>>lv;
 
//fill(&arr[0][0][0][0][0], &arr[49][0][0][0][0], 0);
for(int j=1;j<=lv;j++)
{
	memset(arr , 0, sizeof(arr));

cin>>m>>n>>x>>y;
// for(int e1=0;e1<=50;e1++)
// for(int e2=0;e2<=50;e2++)
// for(int e3=0;e3<=50;e3++)
// for(int e4=0;e4<=50;e4++)
// for(int e5=0;e5<=2;e5++)
// arr[e1][e2][e3][e4][e5]=0;
 
 
qr1=x;
qr2=x+1;
cr1=y;
cr2=y+1;
// int t1,t2,t3,t4;
// t1=x/2;
// t1=t1*2;
// t2=x+1;
// if((m-qr2)%2==1)
// t2=t2+1 ;
// t3=y/2;
// t3=t3*2;
// t4=y+1;
// if((n-cr2)%2==1)
// t4=t4+1 ;
// cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4;
//qr1-=t1;qr2-=t1;cr1-=t3;cr2-=t3;
int e=recur(0,m,0,n,1);
if(e==1)
	cout<<"Gretel\n";
else
	cout<<"Hansel\n";


}

}