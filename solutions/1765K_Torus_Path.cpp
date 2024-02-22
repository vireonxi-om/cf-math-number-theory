// Problem: Torus Path
// URL: https://codeforces.com/problemset/problem/1765/K
// Rating: 1500
// Tags: greedy, math
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

const int N = 1000100;
const int M = 5100000;
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-10;




int main() {
    IO;
    int n;
    cin >> n; 
    long long sum = 0, t = 1e10, num;
    rep(i, 0, n) {
        rep(j, 0, n){
            cin >> num;
            sum += num;
            if (i + j == n - 1) t = min(t, num);
        } 
    }
    cout << sum - t << "\n";
    return 0;
}



