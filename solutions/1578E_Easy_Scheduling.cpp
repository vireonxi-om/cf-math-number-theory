// Problem: Easy Scheduling
// URL: https://codeforces.com/problemset/problem/1578/E
// Rating: 1200
// Tags: implementation, math
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i = a; i < n; i++)
#define repn(i,a,n) for (int i = a; i <= n; i++)
#define per(i,a,n) for (int i = n - 1; i >= a; i--)
#define pern(i,a,n) for (int i = n; i >= a; i--)

typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;

const int N = 210000;
const int M = 1100000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;
const int maxn = 100010;

LL h, p;

LL quick_pow(LL x,LL n){
    LL res = 1;
    while(n > 0) {
        if(n & 1) res = res * x ;
        x = x * x ;
        n >>= 1;
    }
    return res;
}

void solve(){
    LL now = 1;
    scanf("%lld%lld", &h, &p);
    LL sum = quick_pow(2, h) - 1;
    LL ans = 0;
    repn(i, 1, h) {
        if (now >= p) break;
        sum -= now;
        ans ++;
        now *= 2;
    }
    if (sum) ans += (sum + p - 1) / p;
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



