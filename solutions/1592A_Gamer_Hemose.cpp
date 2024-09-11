// Problem: Gamer Hemose
// URL: https://codeforces.com/problemset/problem/1592/A
// Rating: 800
// Tags: binary search, greedy, math, sortings
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

const int N = 310000;
const int M = 1100000;
const int mod = 1000000007;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;
const int maxn = 100010;

int n, h, a[1100];

void solve(){
    scanf("%d%d", &n, &h);
    repn(i, 1, n) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    int d1 = a[n], d2 = a[n - 1];
    int cnt = 2 * (h / (d1 + d2));
    int l = (h % (d1 + d2));
    if (l == 0) cnt = cnt;
    else if (l <= d1) cnt ++;
    else cnt += 2;
    printf("%d\n", cnt);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
