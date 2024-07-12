// Problem: Arithmetic Array
// URL: https://codeforces.com/problemset/problem/1537/A
// Rating: 800
// Tags: greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    int sum=0, num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        sum+=num;
    }
    if(sum==n) printf("0\n");
    else if(sum<n) printf("1\n");
    else printf("%d\n", sum-n);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}