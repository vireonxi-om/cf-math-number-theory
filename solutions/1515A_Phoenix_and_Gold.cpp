// Problem: Phoenix and Gold
// URL: https://codeforces.com/problemset/problem/1515/A
// Rating: 800
// Tags: constructive algorithms, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, a[110];

void solve(){
    scanf("%d%d", &n, &k);
    int sum=0;
    bool can=true;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    if(sum==k) can=false;
    sum=0;
    for(int i=1; i<n; i++){
        sum+=a[i];
        if(sum==k){
            swap(a[i], a[i+1]);
            sum-=a[i+1]; sum+=a[i];
        }
    }
    if(can){
        printf("YES\n");
        for(int i=1; i<=n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}

