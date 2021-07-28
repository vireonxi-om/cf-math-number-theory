// Problem: Controllers
// URL: https://codeforces.com/problemset/problem/1776/L
// Rating: 1500
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

const int N = 110000;
const int M = 51000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

string s;
int n, m; 

 
int main() {
	IO;
	cin >> n; cin >> s;
	LL c1 = 0, c2 = 0;
	rep(i, 0, s.length()) {
		if (s[i] == '+') c1 ++;
		else c2 ++;
	}
	if (c1 < c2) swap(c1, c2);
	LL d = c1 - c2;
	cin >> m;
	repn(i, 1, m) {
		LL n1, n2;
		cin >> n1 >> n2;
		if (n1 < n2) swap(n1, n2);
		if (n1 == n2) {
			if (d) cout << "NO\n";
			else cout << "YES\n";
		} 
		else {
			if (d * n2 % (n1 - n2) == 0) {
				if (d * n2 / (n1 - n2) <= c2) cout << "YES\n";
				else cout << "NO\n";
			} 
			else cout << "NO\n";
		}
	}
	return 0;	
	
}



