// Problem: GCD Sum
// URL: https://codeforces.com/problemset/problem/1498/A
// Rating: 800
// Tags: brute force, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll n;

ll sum1(ll num){
    ll result=0;
    while(num){
        result+=num%10;
        num/=10;
    }
    return result;
}

ll gcd(ll a, ll b){
    return b==0? a:gcd(b, a%b);
}

void solve(){
    scanf("%lld", &n);
    bool can=false;
    while(1){
        ll now=sum1(n);
        if(gcd(n, now)>1) can=true;
        if(can) break;
        n++;
    }
    printf("%lld\n", n);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


