// Problem: Fair Numbers
// URL: https://codeforces.com/problemset/problem/1411/B
// Rating: 1000
// Tags: brute force, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;

bool ck(ll n){
    ll num=n;
    while (num>0){
        ll now=num%10;
        num/=10;
        if(now!=0 && n%now) return true;
    }
    return false;
}

void solve(){
    scanf("%lld", &n);
    while(ck(n)) n++;
    printf("%lld\n", n);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}