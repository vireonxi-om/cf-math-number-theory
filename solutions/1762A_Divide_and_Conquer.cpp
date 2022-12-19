// Problem: Divide and Conquer
// URL: https://codeforces.com/problemset/problem/1762/A
// Rating: 800
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

const int N = 110000;
const int M = 110000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;
const long long INF = (long long)1e18;

int n, a[60];

void solve() {
    cin >> n;
    int sum = 0;
    repn(i, 1, n){
        cin >> a[i];
        sum += a[i];
    } 
    int ans = 100;
    if (sum % 2 == 0) ans = 0;
    else {
        repn(i, 1, n) {
            int num = a[i];
            int cnt = 0;
            while (num > 0 && (num % 2) == (a[i] % 2)) {
                cnt ++;
                num /= 2;
            }
            if (num % 2 != a[i] % 2) ans = min(ans, cnt);
            else continue; 
        }
    } 
    cout << ans << "\n";
}

int main() {
    IO;
    int t;
    cin >> t;
    repn(i, 1, t) solve();
    return 0;
}



