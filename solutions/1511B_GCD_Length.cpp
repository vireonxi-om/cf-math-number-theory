// Problem: GCD Length
// URL: https://codeforces.com/problemset/problem/1511/B
// Rating: 1100
// Tags: constructive algorithms, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int a, b, c;

void solve(){
    scanf("%d%d%d", &a, &b, &c);
    bool sw=false;
    if(a<b){ swap(a, b); sw=true;}
    int z=0;
    for(int i=1; i<=c; i++){
        z*=10; z+=1;
    }
    int y=z;
    for(int i=c; i<b; i++){
        y*=10;
    }
    int x=y;
    for(int i=b; i<a; i++) x*=10;
    x+=z;
    if(sw) swap(x, y);
    printf("%d %d\n", x, y);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
