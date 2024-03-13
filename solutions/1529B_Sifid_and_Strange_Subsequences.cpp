// Problem: Sifid and Strange Subsequences
// URL: https://codeforces.com/problemset/problem/1529/B
// Rating: 1100
// Tags: greedy, math, sortings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> a, b;

void solve(){
    scanf("%d", &n);
    a.clear(); b.clear();
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num<=0) a.push_back(num);
        else b.push_back(num);
    }
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    int m=2e9, cnt=a.size(), ans;
    for(int i=0; i<cnt-1; i++){
        m=min(m, a[i+1]-a[i]);
    }
    if(b.empty()) ans=cnt;
    else{
        if((*b.begin())<=m) cnt++;
        ans=cnt;
    }
    printf("%d\n", ans);
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
