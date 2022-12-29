// Problem: Red-Blue Shuffle
// URL: https://codeforces.com/problemset/problem/1459/A
// Rating: 800
// Tags: math, probabilities
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[1100], b[1100], r, bl;

void solve(){
    scanf("%d", &n);
    r=0; bl=0;
    for(int i=1; i<=n; i++) scanf("%1d", &a[i]);
    for(int i=1; i<=n; i++) scanf("%1d", &b[i]);
    for(int i=1; i<=n; i++){
        if(a[i]>b[i]) r++;
        else if(a[i]<b[i]) bl++;
    }
    if(r>bl) printf("RED\n");
    else if(r<bl) printf("BLUE\n");
    else printf("EQUAL\n");
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) solve();
    return 0;
}
