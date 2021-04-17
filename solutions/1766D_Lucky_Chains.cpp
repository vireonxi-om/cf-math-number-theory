// Problem: Lucky Chains
// URL: https://codeforces.com/problemset/problem/1766/D
// Rating: 1600
// Tags: math, number theory
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
const int M = 11000000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int prim[M], primm;
int valid[M];
void getprime(int n) {
    memset(valid, 0, sizeof(valid));
    for (int i = 2; i <= n; i++) {
        if(!valid[i]) prim[++primm] = i;
        for(int j = 1; j <= n && i * prim[j] <= n; j++) {
         valid[i * prim[j]] = prim[j];
            if(i % prim[j] == 0) break;
        }
    }
}

void solve() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    int ans = 0;
    if (__gcd(a, b) > 1) ans = 0;
    else if (b - a == 1) ans = -1;
    else {
        ans = 1e9;
        int d = b - a;
        while (d > 1) {
            int t = valid[d];
            if (t == 0) t = d;
            while (d > 1 && d % t == 0) d /= t;
            ans = min(ans, t - a % t);
        }
    }
    cout << ans << "\n";
}

int main() {
    IO;
    getprime(M);
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}



