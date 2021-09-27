// Problem: Restore Modulo
// URL: https://codeforces.com/problemset/problem/1484/B
// Rating: 1500
// Tags: implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
ll a[110000];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
    ll s=-1, d=-1, m=-1, maxi=-1;
    bool can=true;
    for(int i=1; i<n; i++){
        if(s!=-1 && d!=-1) break;
        else{
            if(a[i+1]<a[i]){
                if(d!=-1 && a[i]-a[i+1]!=d) can=false;
                else{ d=a[i]-a[i+1];}
            }
            else{
                if(s!=-1 && a[i+1]-a[i]!=s) can=false;
                else s=a[i+1]-a[i];
            }
        }
    }
    if(can){
        if(d==-1 || s==-1) printf("0\n");
        else{
            if(a[1]>=s+d) can=false;
            for(int i=1; i<n; i++){
                ll nxt=(a[i]+s)%(s+d);
                if(a[i+1]!=nxt) can=false;
            }
            if(can) printf("%lld %lld\n", s+d, s);
            else printf("-1\n");
        }
    }
    else printf("-1\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}