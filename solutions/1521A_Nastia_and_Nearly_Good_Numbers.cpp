// Problem: Nastia and Nearly Good Numbers
// URL: https://codeforces.com/problemset/problem/1521/A
// Rating: 1000
// Tags: constructive algorithms, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b;

void solve(){
    scanf("%lld%lld", &a, &b);
    if(b==1) printf("NO\n");
    else{
        printf ("YES\n");
        if(b==2){
            printf("%lld %lld %lld\n", a, a*2, a*3);
        }
        else printf("%lld %lld %lld\n", a, a*(b-1), a*b);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
