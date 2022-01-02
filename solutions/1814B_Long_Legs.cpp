// Problem: Long Legs
// URL: https://codeforces.com/problemset/problem/1814/B
// Rating: 1700
// Tags: brute force, math
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
typedef long double LD;

const int N = 310000;
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int a, b; 

void solve() {
	cin >> a >> b;
	int ans = a + b;
	repn(i, 1, (int)sqrt(a + b + 0.1) + 100) {
		int n1 = (a + i - 1) / i; 
		int n2 = (b + i - 1) / i;
		ans = min(ans, i - 1 + n1 + n2);
	}
	cout << ans << "\n";
} 

int main() {
	IO; 
	int t;
	cin >> t;
	repn(i, 1, t) solve(); 
	return 0;
}


