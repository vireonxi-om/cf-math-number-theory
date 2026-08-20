// Problem: Apollo versus Pan
// URL: https://codeforces.com/problemset/problem/1466/E
// Rating: 1800
// Tags: bitmasks, brute force, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, pos[510000][70];
ll a[510000], cnt[70];

void func(ll num, int i){
    int p=0;
    while(num>0){
        if(num%2==1){
            pos[i][p]=1; cnt[p]++;

        }
        num/=2;p++;
    }
}

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) for(int j=0; j<70; j++){ pos[i][j]=0; cnt[j]=0;}
    for(int i=1; i<=n; i++) {
        scanf("%lld", &a[i]);
        func(a[i], i);
        a[i]%=1000000007;
    }
    ll result=0;
    for(int i=1; i<=n; i++){
        ll sum1=0, sum2=0;
        for(int j=0; j<70; j++){
            if(cnt[j]>0){
                if(pos[i][j]==0) sum1+=((1ll<<j)%1000000007)*cnt[j];
                else sum2+=((1ll<<j)%1000000007)*cnt[j];
                sum1%=1000000007; sum2%=1000000007;
            }
        }
        result+=((((ll)a[i]*n)%1000000007+sum1)%1000000007)*(sum2%1000000007);
        result%=1000000007;
    }
    printf("%lld\n", result);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}// maintenance note (1): small formatting cleanup on this file — 2026-08-20
