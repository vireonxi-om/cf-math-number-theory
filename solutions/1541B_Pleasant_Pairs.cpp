// Problem: Pleasant Pairs
// URL: https://codeforces.com/problemset/problem/1541/B
// Rating: 1200
// Tags: brute force, implementation, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, pos[210000];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=2*n; i++) pos[i]=0;
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        pos[num]=i;
    }
    ll ans=0;
    int a, b;
    for(int i=3; i<=2*n-1; i++){
        for(int t=1; t<=sqrt(i); t++){
            if(i%t) continue;
            a=pos[t]; b=pos[i/t];
            if(a==b || a==0 || b==0) continue;
            if(a+b==i) ans++;
        }
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}