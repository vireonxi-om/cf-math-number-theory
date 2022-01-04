// Problem: Exciting Bets
// URL: https://codeforces.com/problemset/problem/1543/A
// Rating: 900
// Tags: greedy, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b;
const ll M=1000000007;

void solve(){
    scanf("%lld%lld", &a, &b);
    if(a>b) swap(a, b);
    ll ans=b-a, cnt=0;
    if(a!=b && a%ans!=0){
        ll t=a/ans;
        cnt=min(a-t*ans,(t+1)*ans-a);
    }
    printf("%lld %lld\n", ans, cnt);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
