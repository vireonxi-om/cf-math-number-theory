// Problem: Hossam and Combinatorics
// URL: https://codeforces.com/problemset/problem/1771/A
// Rating: 900
// Tags: combinatorics, math, sortings
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

const int N = 310000;
const int M = 11000000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, a[N];

void solve() {
    int n; 
    cin >> n;
    int m1 = 2e5, m2 = -1;
    repn(i, 1, n){
        cin >> a[i];
        m1 = min(m1, a[i]);
        m2 = max(m2, a[i]);
    } 
    int cnt1 = 0, cnt2 = 0;
    repn(i, 1, n) {
        if (a[i] == m1) cnt1 ++;
        if (a[i] == m2) cnt2 ++;
    }
    long long ans;
    if (m1 != m2) {
        ans = 2 * (long long)cnt1 * cnt2;
    }
    else ans = (long long)cnt1 * (cnt1 - 1);
    cout << ans << "\n";
}

int main() {
    IO;
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}



