// Problem: Special Numbers
// URL: https://codeforces.com/problemset/problem/1594/B
// Rating: 1100
// Tags: bitmasks, math
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

const int N = 110000;
const int M = 1100000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;
const int maxn = 100010;

LL n, k;
LL a[50];

void solve(){
    scanf("%lld%lld", &n, &k);
    int pos = 1;
    while (k) {
        a[pos] = k % 2;
        k /= 2;
        pos ++;
    }
    pos --;
    LL result = 0;
    pern(i, 1, pos) {
        result *= n;
        result %= mod;
        result += a[i];
        result %= mod;
    }
    printf("%lld\n", result);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

