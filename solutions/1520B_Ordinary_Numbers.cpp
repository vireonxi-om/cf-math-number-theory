// Problem: Ordinary Numbers
// URL: https://codeforces.com/problemset/problem/1520/B
// Rating: 800
// Tags: brute force, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> num;

void create(int a, int b){
    int result=0;
    while(a){
        a--;
        result+=b;
        if(a) result*=10;
    }
    num.push_back(result);
}

void solve(){
    scanf("%d", &n);
    int ans;
    auto it=lower_bound(num.begin(), num.end(), n);
    if(it==num.end()) ans=81;
    else{
        ans=it-num.begin();
        if((*it)==n) ans++;
    }
    printf("%d\n", ans);
}

int main(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            create(i, j);
        }
    }
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}


