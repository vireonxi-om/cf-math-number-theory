// Problem: Matrix of Differences
// URL: https://codeforces.com/problemset/problem/1783/B
// Rating: 1100
// Tags: constructive algorithms, math
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

const int N = 510000;
const int M = 11000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, a[60][60];

void solve() {
	cin >> n;
	int st = 1, d = n * n - 1, v = 1;
	repn(i, 1, n) {
		if (i % 2) {
			repn(j, 1, n) {
				a[i][j] = st;
				st += v * d; d --; v = -v;
			}
		}
		else {
			pern(j, 1, n) {
				a[i][j] = st;
				st += v * d; d --; v = -v;
			}
		}
	}
	repn(i, 1, n) {
		repn(j, 1, n) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve();
	return 0;
}



