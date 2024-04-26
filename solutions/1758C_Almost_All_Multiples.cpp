// Problem: Almost All Multiples
// URL: https://codeforces.com/problemset/problem/1758/C
// Rating: 1400
// Tags: greedy, number theory
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
const int M = 110000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int a[N];
void solve() {
	int n, m;
	cin >> n >> m;
	repn(i, 1, n) a[i] = 0;
	a[n] = 1;
	a[1] = m;
	if (n == m) a[1] = n;
	else if (n % m == 0) {
		int now = m;
		rep(i, 2, n) {
			if (i % now == 0 && n % i == 0) {
				a[now] = i;
				now = i; 
			}
		}
		a[now] = n;
	}
	else {
		cout << "-1\n";
		return;
	}
	repn(i, 1, n) if (!a[i]) a[i] = i;
	repn(i, 1, n) cout << a[i] << " ";
	cout << "\n";
}

int main() {
    IO;
    int t;
	cin >> t;
	repn(i, 1, t) solve(); 
    return 0;
}



