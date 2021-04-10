// Problem: Histogram Ugliness
// URL: https://codeforces.com/problemset/problem/1534/B
// Rating: 1100
// Tags: greedy, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll a[410000];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
    a[n+1]=0;
    ll sum=0, tot=0;
    for(int i=1; i<=n; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]) tot+=min(a[i]-a[i-1], a[i]-a[i+1]);
        sum+=abs(a[i]-a[i-1]);
    }
    sum+=abs(a[n+1]-a[n]);
    sum-=tot;
    printf("%lld\n", sum);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
