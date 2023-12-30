// Problem: AND Sequences
// URL: https://codeforces.com/problemset/problem/1513/B
// Rating: 1400
// Tags: bitmasks, combinatorics, constructive algorithms, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, a[210000];
const int M=1000000007;

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d" ,&a[i]);
    }
    sort(a+1, a+n+1);
    int cnt=1, m=a[1], now=a[1];
    bool can=true;
    for(int i=2; i<=n; i++){
        if(a[i]==m) cnt++;
        if((now&a[i])!=now) can=false;
    }
    if(!can || cnt<2) printf("0\n");
    else{
        ll ans=(ll)cnt*(cnt-1);
        ans%=M;
        for(int i=1; i<=n-2; i++){ ans*=i; ans%=M;}
        printf("%lld\n", ans);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
