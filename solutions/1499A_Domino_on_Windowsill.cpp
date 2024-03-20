// Problem: Domino on Windowsill
// URL: https://codeforces.com/problemset/problem/1499/A
// Rating: 800
// Tags: combinatorics, constructive algorithms, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k1, k2, w, b;

void solve(){
    scanf("%d%d%d%d%d", &n, &k1, &k2, &w, &b);
    int wt=k1+k2;
    int bt=2*n-wt;
    wt/=2; bt/=2;
    if(wt>=w && bt>=b) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
