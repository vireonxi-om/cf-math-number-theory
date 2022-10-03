// Problem: Strange Function
// URL: https://codeforces.com/problemset/problem/1542/C
// Rating: 1600
// Tags: math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const ll M=1000000007;

ll gcd(ll x, ll y){
    return y==0? x: gcd(y, x%y);
}

void solve(){
    scanf("%lld", &n);
    ll now=2, i=2;
    ll ans=n*2; ans%=M;
    while(now<=n){
        ans+=n/now;
        ans%=M;
        i++;
        now=now/gcd(now, i)*i;
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
