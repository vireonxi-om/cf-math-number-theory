// Problem: Pythagorean Triples
// URL: https://codeforces.com/problemset/problem/1487/D
// Rating: 1500
// Tags: binary search, brute force, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;

void solve(){
    scanf("%d", &n);
    int ans=0;
    for(int i=3; i*i+1<=2*n; i+=2) ans++;
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
