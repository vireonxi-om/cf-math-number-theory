// Problem: Koxia and Number Theory
// URL: https://codeforces.com/problemset/problem/1770/C
// Rating: 1700
// Tags: brute force, chinese remainder theorem, math, number theory
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

const int N = 11000;
const int M = 11000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, flag[M];
long long a[110];

int prim[N], primm;
int valid[M];
void getprime(int n) {
    memset(valid, 0, sizeof(valid));
    for (int i = 2; i <= n; i++) {
        if(!valid[i]) prim[++primm] = i;
        for(int j = 1; j <= n && i * prim[j] <= n; j++) {
         valid[i * prim[j]] = prim[j];
            if(i % prim[j] == 0) break;
        }
    }
}


void solve() {
	cin >> n;
	repn(i, 1, n) cin >> a[i];
	int tot = n * (n - 1) / 2;
	bool ans = true;
	for (int k = 1; prim[k] <= tot; k ++) {
		repn(i, 0, prim[k]) flag[i] = 0;
		repn(i, 1, n) {
			repn(j, i + 1, n) {
				if ((a[i] % prim[k]) == (a[j] % prim[k])) {
					flag[(a[i] % prim[k])] = 1;
				}
			}
		} 
		int cnt = 0;
		repn(i, 0, prim[k]) if (flag[i]) cnt ++;
		if (cnt == prim[k]) {
			ans = false;
		} 
	}
	repn(i, 1, n) {
		repn(j, i + 1, n) if (a[i] == a[j]) ans = false;
	}
	if (ans) cout << "YES\n";
	else cout << "NO\n";
}



int main() {
    IO;
    getprime(10000);
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}




