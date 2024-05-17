// Problem: Customising the Track
// URL: https://codeforces.com/problemset/problem/1543/B
// Rating: 900
// Tags: combinatorics, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll num, sum;
const ll M=1000000007;

void solve(){
    sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%lld", &num);
        sum+=num;
    }
    sum%=n;
    ll ans=sum*(n-sum);
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
