// Problem: Tenzing and Books
// URL: https://codeforces.com/problemset/problem/1842/B
// Rating: 1100
// Tags: bitmasks, greedy, math
// Language: C++17 (GCC 7-32)
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define LC ch[k][0] 
#define RC ch[k][1]
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
const int M = 610000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const LL INF = (LL)1e18;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n;
LL a[N], b[N], c[N], x;

void solve() {
	cin >> n >> x;
	LL t = 1;
	repn(i, 1, 32) t *= 2;
	t -= x; t --;
	LL cur = 0, a1 = 0, b1 = 0, c1 = 0;
	repn(i, 1, n) {
		cin >> a[i]; a[i] = a[i] | a[i - 1];
		if ((a[i] & t) == 0) a1 = a[i];
	}
	repn(i, 1, n) {
		cin >> b[i]; b[i] = b[i] | b[i - 1];
		if ((b[i] & t) == 0) b1 = b[i];
	}
	repn(i, 1, n) {
		cin >> c[i]; c[i] = c[i] | c[i - 1];
		if ((c[i] & t) == 0) c1 = c[i];
	}
	LL ans = 0; ans = ans | a1; ans = ans | b1; ans = ans | c1;
	if (ans < x) cout << "No\n";
	else cout << "Yes\n";
}

int main()
{
	IO;
	int T;
	cin >> T;
	repn(i, 1, T) solve(); 
	return 0;
}
