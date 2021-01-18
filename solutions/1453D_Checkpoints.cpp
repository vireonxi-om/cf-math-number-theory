// Problem: Checkpoints
// URL: https://codeforces.com/problemset/problem/1453/D
// Rating: 1900
// Tags: brute force, constructive algorithms, greedy, math, probabilities
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
long long k;
int a[2100];

void solve(){
    scanf("%lld", &k);
    int n=1;
    bool can=true;
    while(k>0){
        if(k<2){
            can=false;
            break;
        }
        else{
            long long now=2;
            while(k>=now){
                k-=now;
                if(now>2) a[n]=0;
                else a[n]=1;
                n++; now*=2;
            }
        }
    }
    if(can){
        printf("%d\n", n-1);
        for(int i=1; i<n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    else printf("-1\n");
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}

