#include <bits/stdc++.h>
using namespace std;

int checkz(string s1,string s2)
{
 int h=0;
if(s1.length()<s2.length())
{
	int n=s2.length()-1;
for(int m=s1.length()-1;m>=0;m--)
{
if(s1[m]!=s2[n])
	h=1;
--n;
}
}
else
{

	int n=s1.length()-1;
for(int m=s2.length()-1;m>=0;m--)
{
if(s1[n]!=s2[m])
	h=1;
--n;
}

}

return(h);



}
















int main()
{
int n;
vector< set <string> > vv;
vv.resize(100000);
map< string ,int > mp;
map< int , map <string ,int > > juju;
map<int ,string> ll;
int k=1;

cin>>n;
string s;
string num;
int ct;
for(int e=0;e<n;e++)
{
cin>>s;
if(mp[s]==0)
{
mp[s]=k;
ll[k]=s;
++k;
}


int h=mp[s];
cin>>ct;
for(int g=1;g<=ct;g++)
{
cin>>num;
vv[h].insert(num);
}
}



set <string> :: iterator it,it2;

// for(it=vv[1].begin();it!=vv[1].end();it++)
// {
// cout<<*it<<endl;
// }






for(int e=1;e<k;e++)
{

for(it=vv[e].begin();it!=vv[e].end();it++)
{

for(it2=vv[e].begin();it2!=vv[e].end();it2++)

 {

if((*it).length()!=(*it2).length())
{
int r;
 r=checkz((*it),(*it2));
 


if(r==0)
{
if((*it).length()<(*it2).length())
	juju[e][*it]=-1;
else
	juju[e][*it2]=-1;

}

}

} } }


int store[9999]={0};
vector< string > lie[9999];
for(int e=1;e<k;e++)
{

for(it=vv[e].begin();it!=vv[e].end();it++)
{
if(juju[e][*it]==0)
	{store[e]+=1;
     lie[e].push_back(*it);
	}
}
}



cout<<k-1<<endl;

for(int e=1;e<k;e++)
{
	cout<<ll[e]<<" "<<lie[e].size()<<" ";
for(int u=0;u<lie[e].size();u++)
	cout<<lie[e][u]<<" ";
cout<<endl;





}














 }