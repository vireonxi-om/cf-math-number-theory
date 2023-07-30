// Problem: Replacing Elements
// URL: https://codeforces.com/problemset/problem/1473/A
// Rating: 800
// Tags: greedy, implementation, math, sortings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, d;
vector<int> a;

void solve(){
    a.clear();
    scanf("%d%d", &n, &d);
    int num;
    for(int i=1; i<=n;i ++){
        scanf("%d", &num);
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    int sum=a[0]+a[1], max=a[n-1];
    if(sum>d && max>d) printf("NO\n");
    else printf("YES\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
