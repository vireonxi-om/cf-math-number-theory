// Problem: Flip the Bits
// URL: https://codeforces.com/problemset/problem/1504/B
// Rating: 1200
// Tags: constructive algorithms, greedy, implementation, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n;
char a[310000], b[310000];

void solve(){
    scanf("%d", &n);
    scanf("%s%s", a+1, b+1);
    int st=1, cnt1=0, cnt0=0;
    bool can=true;
    for(int i=1; i<=n; i++){
        if(a[i]=='0') cnt0++;
        else cnt1++;
        if(cnt1==cnt0){
            int op;
            if(b[st]!=a[st]) op=1; else op=0;
            for(int j=st; j<=i; j++){
                if(op==0){
                    if(b[j]!=a[j]) can=false;
                }
                if(op==1){
                    if(b[j]==a[j]) can=false;
                }
            }
            st=i+1;
            cnt1=0; cnt0=0;
        }
        else if(i==n){
            for(int j=st; j<=n; j++) if(a[j]!=b[j]) can=false;
        }
    }
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
