 #include <bits/stdc++.h>
using namespace std;
vector<string > arr;
 void permute(string str)
{
     
    sort(str.begin(), str.end());
 
     
    do {
    arr.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
}
 
// Driver code
int main()
{
    string str = "LRUD";
    permute(str);
  
int m,n;
cin>>m>>n;
getchar();
char aree[999][999];
int x1,y1,x2,y2;
for(int t=1;t<=m;t++)
{
for(int r=1;r<=n;r++)
{
aree[t][r]=getchar();
if(aree[t][r]=='S')
{
	x1=t; y1=r;
}
if(aree[t][r]=='E')
{
	x2=t; y2=r;
}
}


getchar();

}
 string qq;
 cin>>qq;
 map<int,char> mp;
 int t=0;
for(int e=0;e<arr.size();e++)
{
int stx=x1;int sty=y1;
for(int ze=1;ze<=4;ze++)
mp[ze-1]=arr[e][ze-1];
for(int v=0;v<qq.length();v++)
{
 int  f=qq[v]-48;
 char xx=mp[f];
 if(xx=='L')
 	--sty;
 if(xx=='R')
 	++sty;
 if(xx=='U')
 	--stx;
 if(xx=='D')
 	++stx;
 if(stx<1 || stx>m || sty<1 || sty>n)
 	break;
 if(aree[stx][sty]=='#')
 	break;
 if(aree[stx][sty]=='E')
 	{
++t;
break;

 	}




}





}


cout<<t;















}