// Problem: Add Candies
// URL: https://codeforces.com/problemset/problem/1447/A
// Rating: 800
// Tags: constructive algorithms, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
int n;

void solve(){
    scanf("%d", &n);
    printf("%d\n", n);
    for(int i=1; i<=n; i++) printf("%d ", i);
    printf("\n");
}


int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}


