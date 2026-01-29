// Problem: Box is Pull
// URL: https://codeforces.com/problemset/problem/1428/A
// Rating: 800
// Tags: math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x, y, a, b, c, d;
ll result;

void solve(){
    result=0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    x=abs(a-c);
    y=abs(b-d);
    if(x && y) result+=2;
    result=result+x+y;
    printf("%lld\n", result);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
