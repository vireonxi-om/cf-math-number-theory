// Problem: Row GCD
// URL: https://codeforces.com/problemset/problem/1459/C
// Rating: 1600
// Tags: math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
ll a[210000], b[210000], c[210000];
ll gcd(ll a, ll b){
    if(b==0) return a;
    else return gcd(b, a%b);
}
int main(){
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
    for(int i=1; i<=m; i++) scanf("%lld", &b[i]);
    sort(a+1, a+n+1);
    c[1]=a[1];
    ll result;
    if(n>1){
    result=a[n]-a[n-1];
    for(int i=n; i>1; i--){
        c[i]=a[i]-a[i-1];
        result=gcd(result, c[i]);
    }
    }
    for(int i=1; i<=m; i++){
        ll r;
        if(n==1) r=a[1]+b[i];
        else r=gcd(result, a[1]+b[i]);
        printf("%lld ", r);
    }
    printf("\n");
    return 0;
}
