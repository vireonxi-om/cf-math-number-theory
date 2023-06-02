// Problem: Forbidden Integer
// URL: https://codeforces.com/problemset/problem/1845/A
// Rating: 800
// Tags: constructive algorithms, implementation, math, number theory
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


int n, k, x;
vector<int> ans;

void solve() {
	ans.clear();
	cin >> n >> k >> x;
	if (x == 1) {
		while (n >= 2 && n != 3 && k >= 2) {
			n -= 2;
			ans.pb(2);
		}
		if (n == 3 && k >= 3)  {
			n -= 3; ans.pb(3);
		}
	}
	else {
		repn(i, 1, n) ans.pb(1); n = 0; 
	} 
	if (n) cout << "NO\n";
	else {
		cout << "YES\n";
		cout << ans.size() << "\n";
		for (auto num : ans) cout << num << " ";
		cout << "\n";
	}
}
int main()
{
	IO;

	int T;
	cin >> T;
	repn(i, 1, T) solve();
	return 0;
}
