// Problem: GCD Festival
// URL: https://codeforces.com/problemset/problem/1575/G
// Rating: 2200
// Tags: math, number theory
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
const int M = 110000;
const int mod = 1e9+7;
const int inf = (int)1e9;
const double eps = 1e-9;

int phi[M],prim[M],primm;
bool valid[M];
void getPhi()
{
	int i,j;
	phi[1]=1;
	for(i=2;i<M;i++)
	{
		if(!valid[i])
		{
			prim[++primm]=i;
			phi[i]=i-1;
		}
		for(j=1;i*prim[j]<M;j++)
		{
			valid[prim[j]*i]=1;
			if(i%prim[j]==0)
			{
				phi[prim[j]*i]=phi[i]*prim[j];
				break;
			}
			phi[prim[j]*i]=phi[i]*(prim[j]-1);
		}
	}
}
int n, a[N], pp[N], num[N];
vector<int> g[N];
int main()
{
	getPhi();
	IO;
	cin >> n;
	repn(i, 1, n) cin >> a[i];
	LL ans = 0;
	repn(i, 1, 100000)
		repn(j, 1, 100000 / i) g[i * j].pb(i);
	repn(i, 1, n) {
		LL res = 0;
		repn(j, 1, n / i) {
			for (auto x: g[a[j * i]]) {
				num[x]++;
			}
		}
		repn(j, 1, n / i){
			for (auto x: g[a[j * i]]) {
				if (!pp[x]) {
					pp[x] = 1;
					LL nn = (LL)num[x] * num[x] % mod;
					res = (res + nn * phi[x]) % mod;
				}
			}
		}			
		ans = (ans + res * phi[i]) % mod;
		repn(j, 1, n / i) {
			for (auto x: g[a[j * i]]) {
				num[x] = 0, pp[x] = 0;
			}
		}
	}
	cout << ans << endl;
	return 0;
}