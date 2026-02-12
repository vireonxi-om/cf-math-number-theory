// Problem: Binary Decimal
// URL: https://codeforces.com/problemset/problem/1530/A
// Rating: 800
// Tags: greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    int num=0;
    while(n){
        num=max(num, n%10);
        n/=10;
    }
    printf("%d\n", num);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
