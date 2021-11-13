// Problem: No More Inversions
// URL: https://codeforces.com/problemset/problem/1473/C
// Rating: 1500
// Tags: constructive algorithms, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k, ans[210000];

void solve(){
    scanf("%d%d", &n, &k);
    for(int i=1; i<2*k-n; i++) ans[i]=i;
    for(int i=k; i>=2*k-n; i--) ans[i]=3*k-n-i;
    for(int i=1; i<=k; i++) printf("%d ", ans[i]);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
