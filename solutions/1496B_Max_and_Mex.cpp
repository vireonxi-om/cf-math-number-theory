// Problem: Max and Mex
// URL: https://codeforces.com/problemset/problem/1496/B
// Rating: 1100
// Tags: math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, k;
set<int> s;

void solve(){
    scanf("%d%d", &n, &k);
    s.clear();
    int num, m=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        m=max(m, num);
        s.insert(num);
    }
    int t=s.size(), now=0, mex=-1;
    for(auto it=s.begin(); it!=s.end(); it++){
        if((*it)!=now) {mex=now; break;}
        now++;
    }
    int ans;
    if(mex==-1){
        ans=t+k;
    }
    else{
        if(k) s.insert((mex+m+1)/2);
        ans=s.size();
    }
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
