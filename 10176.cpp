#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string s;
    char c;
    while(cin>>c){
        string temp;
        temp=c;
        s=temp;
        while(cin>>c,c!='#') {
             s=s+c;
        }
        int counter=0;
        ll prime=131071,ans=0;
        for(ll i=s.length()-1;i>=0;i--,counter++){
            if(s[i]=='1'){
                ll temp=1;
                for(ll i=0;i<counter;i++){
                    temp=temp<<1;
                    temp%=prime;
                }
                ans+=temp;
                ans%=prime;
            }
        }
        if(ans%prime==0||ans==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}