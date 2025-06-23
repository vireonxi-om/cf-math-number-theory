// Problem: Strange Functions
// URL: https://codeforces.com/problemset/problem/1455/A
// Rating: 800
// Tags: math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
char a[200];

void solve(){
    scanf("%s", &a);
    printf("%d\n", strlen(a));
}


int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++) solve();
    return 0;
}


