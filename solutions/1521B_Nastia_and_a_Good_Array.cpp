// Problem: Nastia and a Good Array
// URL: https://codeforces.com/problemset/problem/1521/B
// Rating: 1300
// Tags: constructive algorithms, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[110000];

void solve(){
    scanf("%d", &n);
    int m=2e9, pos;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(a[i]<m) pos=i;
        m=min(m, a[i]);
    }
    printf("%d\n", n-1);
    for(int i=pos; i<n; i++){
        printf("%d %d %d %d\n", pos, i+1, m, m+i-pos+1);
    }
    for(int i=pos; i>1; i--){
        printf("%d %d %d %d\n", pos, i-1, m, m+pos-i+1);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
