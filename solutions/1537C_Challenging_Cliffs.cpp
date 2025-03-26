// Problem: Challenging Cliffs
// URL: https://codeforces.com/problemset/problem/1537/C
// Rating: 1200
// Tags: constructive algorithms, greedy, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, h[210000];

void solve(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &h[i]);
    sort(h+1, h+n+1);
    int m=2e9, pos=-1, d;
    for(int i=2; i<=n; i++){
        d=h[i]-h[i-1];
        if(d<m){ m=d; pos=i;}
    }
    if(n==2 || h[n]-h[1]==0){
        for(int i=1; i<=n; i++) printf("%d ", h[i]);
        printf("\n");
    }
    else{
        for(int i=pos; i<=n; i++) printf("%d ", h[i]);
        for(int i=1; i<pos; i++) printf("%d ", h[i]);
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}