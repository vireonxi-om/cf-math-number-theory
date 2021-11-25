// Problem: Array Reodering
// URL: https://codeforces.com/problemset/problem/1535/B
// Rating: 900
// Tags: brute force, greedy, math, number theory, sortings
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> a1, a2;

int gcd(int x, int y){
    return y==0? x: gcd(y, x%y);
}

void solve(){
    scanf("%d", &n);
    a1.clear(); a2.clear();
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num%2) a2.push_back(num);
        else a1.push_back(num);
    }
    ll ans=0;
    int a=a1.size(), b=a2.size();
    for(int i=1; i<=a; i++) ans+=n-i;
    for(int i=0; i<b-1; i++){
        for(int j=i+1; j<b; j++){
            if(gcd(a2[i], a2[j])>1) ans++;
        }
    }
    printf("%lld\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


