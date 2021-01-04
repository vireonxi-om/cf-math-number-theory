// Problem: And Then There Were K
// URL: https://codeforces.com/problemset/problem/1527/A
// Rating: 800
// Tags: bitmasks
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;

void solve(){
    scanf("%lld", &n);
    int cnt=0;
    while(n){
        n/=2;
        cnt++;
    }
    printf("%d\n", (1<<(cnt-1))-1);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
