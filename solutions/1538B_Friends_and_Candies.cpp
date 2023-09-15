// Problem: Friends and Candies
// URL: https://codeforces.com/problemset/problem/1538/B
// Rating: 800
// Tags: greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[210000];

void solve(){
    scanf("%d", &n);
    ll sum=0;
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    bool can=true, yes=false;
    int cnt=0;
    if(sum%n) can=false;
    if(can){
        sum/=n;
        for(int i=1; i<=n; i++){
            if(a[i]!=sum) yes=true;
            if(a[i]>sum) cnt++;
        }
        if(yes) printf("%d\n", cnt);
        else printf("0\n");
    }
    else printf("-1\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
