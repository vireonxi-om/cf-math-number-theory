// Problem: Odd Grasshopper
// URL: https://codeforces.com/problemset/problem/1607/B
// Rating: 900
// Tags: math
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k<<1
#define RC k<<1|1
#define IO cin.sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repn(i, a, n) for (int i = a; i <= n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pern(i, a, n) for (int i = n; i >= a; i--)
 
typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
 
const int N = 410000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = 1e9;
const LL INF = 1e18;
const double eps = 1e-9;

LL st, n;

void solve() {
	scanf("%lld%lld", &st, &n);
	LL ans;
	int ty = 1;
	if (st % 2 == 0) ty = -1;
	if (n % 4 == 0) ans = st; 
	else if (n % 4 == 1) ans = st + ty * n;
	else if (n % 4 == 2) ans = st - ty * 1;
	else if (n % 4 == 3) ans = st - ty * (n + 1);
	printf("%lld\n", ans);
}

int main() {
	int t;
	scanf("%d", &t);
	repn(i, 1, t) solve();
	return 0;
}














