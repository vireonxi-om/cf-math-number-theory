// Problem: Sum of Two Numbers
// URL: https://codeforces.com/problemset/problem/1788/B
// Rating: 1100
// Tags: constructive algorithms, greedy, implementation, math, probabilities
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
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n; 

void solve() {
	cin >> n;
	int a1 = 0, a2 = 0, tp = 0, b = 1;
	while (n) {
		int cur = n % 10;
		n /= 10;
		a1 += b * (cur / 2);
		a2 += b * (cur / 2);
		if (cur % 2){
			if (tp == 0) a1 += b;
			else a2 += b;
			tp = 1 - tp;
		}
		b *= 10;
	}
	cout << a1 << " " << a2 << "\n";
}

int main() {
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve();
	return 0;	
}



