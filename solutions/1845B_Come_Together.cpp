// Problem: Come Together
// URL: https://codeforces.com/problemset/problem/1845/B
// Rating: 900
// Tags: geometry, implementation, math
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC k << 1
#define RC k << 1 | 1
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
typedef pair<int, LL> pii;
template<typename T> void down(T &x, T y) { if (x > y) x = y; }

const int N = 310000;
const int M = 610000;
const int mod = 998244353;
const int inf = (int)1e9;
const LL INF = (LL)1e12 + 5;
const double eps = 1e-9;
const double pi = acos(-1.0);


int p[4][2];

void solve() {
	repn(i, 1, 3) cin >> p[i][0] >> p[i][1];
	int x1 = p[2][0] - p[1][0], x2 = p[3][0] - p[1][0];
	int y1 = p[2][1] - p[1][1], y2 = p[3][1] - p[1][1];
	int ans = 0;
	if (x1 < 0 && x2 < 0) {
		ans += min(-x1, -x2) + 1;
	}
	else if (x1 > 0 && x2 > 0) {
		ans += min(x1, x2) + 1;
	}
	else ans += 1;
	if (y1 < 0 && y2 < 0) {
		ans += min(-y1, -y2) + 1;
	}
	else if (y1 > 0 && y2 > 0) {
		ans += min(y1, y2) + 1;
	}
	else ans += 1;
	ans --;
	cout << ans << "\n";
}
int main()
{
	IO;
	int T;
	cin >> T;
	repn(i, 1, T) solve();
	return 0;
}
