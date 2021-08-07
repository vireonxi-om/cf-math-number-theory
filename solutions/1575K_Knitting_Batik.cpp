// Problem: Knitting Batik
// URL: https://codeforces.com/problemset/problem/1575/K
// Rating: 2200
// Tags: implementation, math
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

const int N = 110000;
const int M = 1100000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const double eps = 1e-9;

LL pow_mod(LL a, LL e) {
	LL res = 1;
	for (; e; a = a * a % mod, e >>= 1) if (e & 1) res = res * a % mod;
	return res;
}
LL n, m, k, r, c;
int ax, ay, bx, by;
int main()
{
	IO;
	cin >> n >> m >> k >> r >> c;
	cin >> ax >> ay >> bx >> by;
	if (ax == bx && ay == by) cout << pow_mod(k, n * m) << endl;
	else cout << pow_mod(k, n * m - r * c) << endl;
	return 0;
}