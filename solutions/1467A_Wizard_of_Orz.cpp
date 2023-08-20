// Problem: Wizard of Orz
// URL: https://codeforces.com/problemset/problem/1467/A
// Rating: 900
// Tags: constructive algorithms, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;

void solve(){
    scanf("%d", &n);
    printf("9");
    for(int i=2; i<=n; i++) printf("%d", (i+6)%10);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

