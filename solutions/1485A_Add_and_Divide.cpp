// Problem: Add and Divide
// URL: https://codeforces.com/problemset/problem/1485/A
// Rating: 1000
// Tags: brute force, greedy, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a, b;

void solve(){
    scanf("%d%d", &a, &b);
    int ans=1e9;
    for(int i=0; i<=1000; i++){
        int now=b+i, an=a, cnt=0;
        if(now==1) continue;
        while(an){
            an/=now; cnt++;
        }
        ans=min(cnt+i, ans);
    }
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

