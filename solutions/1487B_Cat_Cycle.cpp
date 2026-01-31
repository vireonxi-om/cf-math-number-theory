// Problem: Cat Cycle
// URL: https://codeforces.com/problemset/problem/1487/B
// Rating: 1200
// Tags: math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll n, k;

void solve(){
    scanf("%lld%lld", &n, &k);
    ll tot=k;
    if(n%2==1){
        ll h=n/2;
        ll t=k/h;
        if(k%h==0) t--;
        tot+=t;
    }
    if(tot%n==0) printf("%lld\n", n);
    else printf("%lld\n", tot%n);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
