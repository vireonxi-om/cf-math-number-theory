// Problem: Genius's Gambit
// URL: https://codeforces.com/problemset/problem/1492/D
// Rating: 1900
// Tags: bitmasks, constructive algorithms, greedy, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int a, b, k, x[210000], y[210000];

int main(){
    scanf("%d%d%d", &a, &b, &k);
    bool can=true;
    if(a==0 || b==1){
        if(k>0) can=false;
        else{
            for(int i=1; i<=b; i++) {x[i]=1; y[i]=1;}
        }
    }
    else if(k>=a+b-1) can=false;
    else{
        x[1]=1; y[1]=1;
        if(k<=b-1){
            for(int i=a+2; i<=a+b; i++){ x[i]=1; y[i]=1;}
            x[a+1]=1; x[a+1+k]=0;
        }
        else{
            for(int i=a+2; i<=a+b; i++){ x[i]=1; y[i]=1;}
            x[a+b]=0; x[a+b-k]=1;
        }
    }
    if(can){
        printf("Yes\n");
        for(int i=1; i<=a+b; i++) printf("%d", x[i]); printf("\n");
        for(int i=1; i<=a+b; i++) printf("%d", y[i]); printf("\n");
    }
    else printf("No\n");
}
