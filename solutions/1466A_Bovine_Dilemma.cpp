// Problem: Bovine Dilemma
// URL: https://codeforces.com/problemset/problem/1466/A
// Rating: 800
// Tags: brute force, geometry, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[60], cnt[100];

void solve(){
    scanf("%d", &n);
    for(int i=0; i<100; i++) cnt[i]=0;
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++) cnt[abs(a[i]-a[j])]++;
    }
    int result=0;
    for(int i=0; i<100; i++) if(cnt[i]) result++;
    printf("%d\n", result);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}