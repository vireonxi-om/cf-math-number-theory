// Problem: Number Factorization
// URL: https://codeforces.com/problemset/problem/1787/B
// Rating: 1100
// Tags: greedy, math, number theory
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

int n, a[40]; 


void solve() {
	cin >> n;
	int sum = 0, num = n;
	repn(i, 1, 35) a[i] = 1;
	for (int i = 2; i * i <= num; i ++) {
		int now = 1;
		while (num % i == 0) {
			a[now ++] *= i;
			num /= i;
		}
	}
	a[1] *= num;
	repn(i, 1, 35) {
		if (a[i] == 1) break;
		sum += a[i];
	}
	cout << sum << "\n";
}

int main() {
	IO;
	int t;
	cin >> t;
	repn(i, 1, t) solve();
	return 0;	
}



