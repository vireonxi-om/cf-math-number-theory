// Problem: Ezzat and Two Subsequences
// URL: https://codeforces.com/problemset/problem/1557/A
// Rating: 800
// Tags: brute force, math, sortings
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
const int M = 1100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;

int n;
double m, sum;


void solve(){
    scanf("%d", &n);
    m = - inf - 1;
    sum = 0;
    double num;
    repn(i, 1, n) {
        scanf("%lf", &num);
        if (num - m > 1e-8) m = num;
        sum += num;
    }
    sum -= m;
    double ans = sum / (n - 1) + m;
    printf("%.9f\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}
