// Problem: Hossam and Trainees
// URL: https://codeforces.com/problemset/problem/1771/C
// Rating: 1600
// Tags: greedy, math, number theory
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
const int M = 110000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, a[N];

int prim[N], primm;
int valid[N];
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
    cin >> n;
    repn(i, 1, n) cin >> a[i];
    bool ans = false;
    repn(j, 1, primm) {
        int cnt = 0, cnt1 = 0, p = prim[j];
        repn(i, 1, n) {
            if (a[i] == 1) cnt1 ++;
            if (a[i] % p) continue;
            cnt ++;
            while (a[i] % p == 0) a[i] /= p;
            if (a[i] == 1) cnt1 ++;
        }
        if (cnt >= 2) ans = true;
    }
    sort(a + 1, a + n + 1);
    rep(i, 1, n) {
        if (a[i] != 1 && a[i] == a[i + 1]) ans = true;
    }
    if (ans) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    IO;
    getprime(N);
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}



