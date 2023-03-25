// Problem: Tenzing and Tsondu
// URL: https://codeforces.com/problemset/problem/1842/A
// Rating: 800
// Tags: games, math
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

const int N = 50;
const int M = 610000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const LL INF = (LL)1e18;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n, m;

void solve() {
	cin >> n >> m;
	LL s1 = 0, s2 = 0, num;
	repn(i, 1, n) {
		cin >> num; s1 += num;
	}
	repn(i, 1, m) {
		cin >> num;
		s2 += num;
	}
	if (s2 > s1) cout << "Tenzing\n";
	else if (s1 > s2) cout << "Tsondu\n";
	else cout << "Draw\n";
}

int main()
{
	IO;
	int T;
	cin >> T;
	repn(i, 1, T) solve(); 
	return 0;
}
