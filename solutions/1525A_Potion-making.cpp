// Problem: Potion-making
// URL: https://codeforces.com/problemset/problem/1525/A
// Rating: 800
// Tags: math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

int gcd(int a, int b){
    return b==0? a : gcd(b, a%b);
}

void solve(){
    scanf("%d", &n);
    printf("%d\n", 100/gcd(n, 100-n));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}