// Problem: Red-Blue Operations (Hard Version)
// URL: https://codeforces.com/problemset/problem/1832/D2
// Rating: 2400
// Tags: binary search, constructive algorithms, greedy, implementation, math
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
 
const int N = 210000;
const int M = 1100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;
 
 
int n, q;
int a[N], k[N], b[N], c[N];
int ans[N], res[N];
LL totb = 0, totc = 0;

int main() {
	IO;
	cin >> n >> q;
	repn(i, 1, n) cin >> a[i];
	repn(i, 1, q) cin >> k[i];
	sort(a + 1, a + n + 1);
	int mm = a[1] + 1;
	ans[1] = mm;
	if (n > 1) ans[1] = min(mm, a[2]);
	repn(i, 2, n) {
		mm = min(a[i] + 1, mm + 1);
		ans[i] = mm;
		if (i < n) ans[i] = min(ans[i], a[i + 1]);
	}
	repn(i, 1, n) {
		b[i] = a[i] + n - i + 1;
		c[i] = a[i] + n - i;
    }
    sort(b + 1, b + n + 1);
    sort(c + 1, c + n);
    repn(i, 2, n) totb += b[i] - b[1];
    rep(i, 2, n) totc += c[i] - c[1];
    
    repn(i, 1, q) {
    	if (k[i] <= n) res[i] = ans[k[i]];
    	else if ((k[i] - n) % 2) {
    		int num = (k[i] - n) / 2 + 1, m1 = c[1] + k[i] - n + 1, m2 = a[n];
    		if (totc >= num) { res[i] = min(m1, m2); continue;}
    		num -= totc;
			if (m2 > m1) {
				if (m2 - m1 >= num) { res[i] = m1; continue;}
				num -= (m2 - m1);
			}
			else {
				LL cur = (LL)(n - 1) * (m1 - m2);
				if (cur >= num) { res[i] = m2; continue;}
				num -= cur;
			}
			res[i] = min(m1, m2) - (num + n - 1) / n;			
		}
		else {
			int num = (k[i] - n) / 2, m1 = b[1] + k[i] - n;
			if (totb >= num) { res[i] = m1; continue;}
			num -= totb;
			res[i] = m1 - (num + n - 1) / n;
		}
	}
	repn(i, 1, q) cout << res[i] << " ";
	cout << "\n";
	return 0;
}

