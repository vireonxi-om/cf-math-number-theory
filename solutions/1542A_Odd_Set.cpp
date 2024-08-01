// Problem: Odd Set
// URL: https://codeforces.com/problemset/problem/1542/A
// Rating: 800
// Tags: math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    int num, cnt0=0;
    scanf("%d", &n);
    for(int i=1; i<=2*n; i++){
        scanf("%d", &num);
        if(num%2==0) cnt0++;
    }
    if(cnt0==n) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
