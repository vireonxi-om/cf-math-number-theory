// Problem: RPD and Rap Sheet (Easy Version)
// URL: https://codeforces.com/problemset/problem/1543/D1
// Rating: 1700
// Tags: bitmasks, constructive algorithms, interactive, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
const ll M=1000000007;

void solve(){
    scanf("%d%d", &n, &k);
    bool cont=true;
    int tnow=0, test=0, t, r;
    while(cont){
        t=tnow^test;
        tnow=test;
        printf("%d\n", t);
        fflush(stdout);
        scanf("%d", &r);
        if(r){
            cont=false;
        }
        else{
            test++;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
