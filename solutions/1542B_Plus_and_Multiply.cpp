// Problem: Plus and Multiply
// URL: https://codeforces.com/problemset/problem/1542/B
// Rating: 1500
// Tags: constructive algorithms, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, b;

void solve(){
    scanf("%lld%lld%lld", &n, &a, &b);
    ll now=1;
    bool can=false;
    while(a!=1 && now<=n){
        if((n-now)%b==0){
            can=true;
            break;
        }
        now*=a;
    }
    if(a==1 && (n-1)%b==0) can=true;
    if(can) printf("Yes\n");
    else printf("No\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
