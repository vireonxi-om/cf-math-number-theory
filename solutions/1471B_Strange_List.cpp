// Problem: Strange List
// URL: https://codeforces.com/problemset/problem/1471/B
// Rating: 1100
// Tags: brute force, greedy, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, x, a[110000], cnt[110000];

void solve(){
    scanf("%d%d", &n, &x);
    for(int i=1; i<=n; i++) cnt[i]=0;
    int l=1e9;
    ll sum=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
        int now=a[i];
        while(now>0){
            if(now%x==0){
                cnt[i]++;
                now/=x;
            }
            else break;
        }
        l=min(l, cnt[i]);
    }
    ll sum2=0;
    for(int i=1; i<=n; i++){
        if(cnt[i]!=l) sum2+=a[i];
        else break;
    }
    sum*=(l+1);
    sum+=sum2;
    printf("%lld\n", sum);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}