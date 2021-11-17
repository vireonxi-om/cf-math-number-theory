// Problem: Cobb
// URL: https://codeforces.com/problemset/problem/1554/B
// Rating: 1700
// Tags: bitmasks, brute force, greedy, math
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
const int mod = 998244353;
const int inf = (int)1e9;
const double eps = 1e-9;
const LL INF = 1e15;

int n, k;
LL a[N], pow2[25];


void solve(){
    scanf("%d%d", &n, &k);
    repn(i, 1, n) scanf("%lld", &a[i]);
    LL t;
    for(int i=1; i<=30; i++){
        if(pow2[i]>n){ t=pow2[i]; break;}
    }
    t*=k;
    t=(LL)n*(n-1)-t-20;
    t=max(t, (LL)0);
    LL ans=-INF;
    for(int j=n; j>1; j--) {
        for(int i=j-1; i>=1; i--) {
            if((LL)i*j<t) break;
            ans=max(ans, (LL)i*j-k*(a[i]|a[j]));
        }
    }
    printf("%lld\n", ans);
}

int main(){
    pow2[0]=1;
    repn(i, 1, 20) pow2[i]=pow2[i-1]*2;
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}



