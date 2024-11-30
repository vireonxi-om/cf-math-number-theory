// Problem: Strange Partition
// URL: https://codeforces.com/problemset/problem/1471/A
// Rating: 900
// Tags: greedy, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[110000];
ll x;

void solve(){
    scanf("%d%d", &n, &x);
    ll sum1=0, sum2=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        sum1+=(a[i]+x-1)/x;
        sum2+=a[i];
    }
    sum2=(sum2+x-1)/x;
    printf("%lld %lld\n", sum2, sum1);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}