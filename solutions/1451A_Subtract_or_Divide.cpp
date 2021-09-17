// Problem: Subtract or Divide
// URL: https://codeforces.com/problemset/problem/1451/A
// Rating: 800
// Tags: greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
int n, cnt;
void solve(){
    cnt=0;
    scanf("%d", &n);
    if(n==2) cnt=1;
    else if(n==3) cnt=2;
    else if(n>2&&n%2==0) cnt=2;
    else if(n>2&&n%2==1) cnt=3;
    printf("%d\n", cnt);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
