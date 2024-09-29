// Problem: Almost Sorted
// URL: https://codeforces.com/problemset/problem/1509/E
// Rating: 1800
// Tags: brute force, constructive algorithms, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[110000], ans[110000];
ll k;

void solve(){
    scanf("%d%lld", &n, &k);
    for(int i=1; i<=n; i++) a[i]=0;
    k--;
    int pos=n;
    bool can=true;
    while(k){
        if(pos==1) {can=false; break;}
        a[pos--]=k%2;
        k/=2;
    }
    if(can){
        int st=n, t, val;
        while(st>0){
            while(st>0 && a[st]==0){ ans[st]=st; st--;}
            if(st<=0) break;
            t=st;
            while(t>0 && a[t]==1) t--;
            val=st;
            for(int i=t; i<=st; i++){
                ans[i]=val; val--;
            }
            st=t-1;
        }
        for(int i=1; i<=n; i++) printf("%d ", ans[i]);
        printf("\n");
    }
    else printf("-1\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
