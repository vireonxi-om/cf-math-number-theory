// Problem: Minimal Cost
// URL: https://codeforces.com/problemset/problem/1491/B
// Rating: 1200
// Tags: brute force, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  LL;
int n, u, v, a[110];

void solve(){
    scanf("%d%d%d", &n, &u, &v);
    bool can=false, yes=false;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(i>1 && abs(a[i]-a[i-1])==1) can=true;
        else if(i>1 && abs(a[i]-a[i-1])>1) yes=true;
    }
    int ans;
    if(yes) printf("0\n");
    else{
        if(can){
            ans=min(u, v);
        }
        else ans=min(u+v, 2*v);
        printf("%d\n", ans);
    }
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
