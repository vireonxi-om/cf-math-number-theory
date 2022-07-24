// Problem: Phoenix and Puzzle
// URL: https://codeforces.com/problemset/problem/1515/B
// Rating: 1000
// Tags: brute force, geometry, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    bool can=false;
    if(n%2==0){
        n/=2;
        int t=sqrt(n);
        if(t*t==n) can=true;
        if(n%2==0){
            n/=2;
            int q=sqrt(n);
            if(q*q==n) can=true;
        }
    }
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

