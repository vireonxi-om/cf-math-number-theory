// Problem: Eshag Loves Big Arrays
// URL: https://codeforces.com/problemset/problem/1529/A
// Rating: 800
// Tags: constructive algorithms, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, cnt[110];

void solve(){
    for(int i=1; i<=100; i++) cnt[i]=0;
    scanf("%d", &n);
    int num, m=110;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        cnt[num]++;
        m=min(m, num);
    }
    printf("%d\n", n-cnt[m]);
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
// maintenance note (7): add complexity note to this file — 2026-09-04
