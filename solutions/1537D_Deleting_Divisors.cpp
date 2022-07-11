// Problem: Deleting Divisors
// URL: https://codeforces.com/problemset/problem/1537/D
// Rating: 1700
// Tags: games, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

void solve(){
    scanf("%d", &n);
    int t=0, ans=0;
    if(n%2) ans=1;
    else{
        while(n%2==0){
            t++;
            n/=2;
        }
        if(n>1 || t%2==0) ans=0;
        else ans=1;
    }
    if(ans) printf("Bob\n");
    else printf("Alice\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
