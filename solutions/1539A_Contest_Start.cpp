// Problem: Contest Start
// URL: https://codeforces.com/problemset/problem/1539/A
// Rating: 1000
// Tags: combinatorics, geometry, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, x, t;

void solve(){
    scanf("%lld%lld%lld", &n, &x, &t);
    ll cnt=t/x, ans;
    if(cnt>=n-1){ ans=n*(n-1)/2;}
    else{
        ans=cnt*(cnt-1)/2;
        ans+=cnt*(n-cnt);
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
