// Problem: Three swimmers
// URL: https://codeforces.com/problemset/problem/1492/A
// Rating: 800
// Tags: math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll a, b, c, t;

void solve(){
    scanf("%lld%lld%lld%lld", &t, &a, &b, &c);
    ll ans=2e18;
    if(t%a==0 || t%b==0 || t%c==0) ans=0;
    ans=min(a-t%a, ans);
    ans=min(b-t%b, ans);
    ans=min(ans, c-t%c);
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
