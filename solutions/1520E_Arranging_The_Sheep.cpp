// Problem: Arranging The Sheep
// URL: https://codeforces.com/problemset/problem/1520/E
// Rating: 1400
// Tags: greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char s[1100000];
vector<int> a, b;

void solve(){
    scanf("%d%s", &n, s+1);
    a.clear(); b.clear();
    int cnt=0;
    for(int i=1; i<=n; i++) if(s[i]=='*'){ cnt++; a.push_back(i);}
    int mid=(cnt+1)/2; mid--;
    for(int i=0; i<cnt; i++) b.push_back(0);
    ll ans=0;
    if(cnt){
        b[mid]=a[mid];
        for(int i=mid-1; i>=0; i--) b[i]=b[i+1]-1;
        for(int i=mid+1; i<cnt; i++) b[i]=b[i-1]+1;
        for(int i=0; i<cnt; i++) ans+=abs(a[i]-b[i]);
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


