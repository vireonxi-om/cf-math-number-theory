// Problem: Maximum Set
// URL: https://codeforces.com/problemset/problem/1796/C
// Rating: 1600
// Tags: binary search, math
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

const int N = 2000000;
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;


void solve() {
	int l, r;
	cin >> l >> r;
	int ans = 0;
	int num = l, tot = 1, cnt = 0;
	while (num * 2 <= r) {
		num *= 2;
		tot *= 2;
		cnt ++;
	}
	ans += r / tot - l + 1;
	if (tot > 1) {
		tot /= 2; tot *= 3;
		if (r / tot >= l) {
			ans += (r / tot - l + 1) * cnt;
		}
	}
	cout << cnt + 1 << " " << ans << "\n";
}
 
int main() {
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;	
	
}



