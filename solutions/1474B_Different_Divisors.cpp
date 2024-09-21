// Problem: Different Divisors
// URL: https://codeforces.com/problemset/problem/1474/B
// Rating: 1000
// Tags: binary search, constructive algorithms, greedy, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int d;
ll result;

void solve(){
    scanf("%d", &d);
    int a, b;
    for(int i=1+d; ; i++){
        bool can=true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                can=false;
                break;
            }
        }
        if(can){
            a=i;
            break;
        }
    }
    for(int i=a+d; ; i++){
        bool can=true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                can=false;
                break;
            }
        }
        if(can){
            b=i;
            break;
        }
    }
    result=(ll)a*b;
    printf("%lld\n", result);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
