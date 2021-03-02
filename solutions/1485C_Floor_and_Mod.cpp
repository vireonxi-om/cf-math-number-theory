// Problem: Floor and Mod
// URL: https://codeforces.com/problemset/problem/1485/C
// Rating: 1700
// Tags: binary search, brute force, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int x, y;

void solve(){
    scanf("%d%d", &x, &y);
    int m=min((int)sqrt(x), y);
    ll ans=0;
    for(int t=1; t<=m; t++){
        if(t+1>y || (ll)(t+2)*t>x) break;
        int l=t, r=y, a;
        while(l<=r){
            int mid=(l+r)/2;
            if((ll)(mid+1)*t>x) r=mid-1;
            else {l=mid+1; a=mid;}
        }
        //printf("%d %d\n", t, a);
        ans+=a-t;
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

