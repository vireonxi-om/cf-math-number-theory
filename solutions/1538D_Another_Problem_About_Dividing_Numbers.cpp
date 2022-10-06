// Problem: Another Problem About Dividing Numbers
// URL: https://codeforces.com/problemset/problem/1538/D
// Rating: 1700
// Tags: constructive algorithms, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, k;
const int MAX=100000;
int mind[110000];
vector<int> primes;

void solve(){
    scanf("%lld%lld%lld", &a, &b, &k);
    ll num1=a, num2=b;
    bool can=false;
    int cnta=0, cntb=0;
    for(auto i:primes){
        if(i>sqrt(num1)) break;
        while(a%i==0){ a/=i; cnta++;}
        if(a==1) break;
    }
    if(a>1) cnta++;
    for(auto i:primes){
        if(i>sqrt(num2)) break;
        while(b%i==0){ b/=i; cntb++;}
        if(b==1) break;
    }
    if(b>1) cntb++;
    if(k==1){
        if(num1!=num2){
            if(num1>num2) swap(num1, num2);
            if((num2%num1==0) && num2%(num2/num1)==0) can=true;
        }
    }
    else{
        if(cnta+cntb>=k) can=true;
    }
    if(can) printf("YES\n");
    else printf("NO\n");
}

int main(){
    for(int i=2; i<=MAX; i++){
        if(mind[i] == 0){
            primes.emplace_back(i);
            mind[i]=i;
        }
        for(auto x: primes){
            if(x>mind[i] || x*i>MAX) break;
            mind[x*i]=x;
        }
    }
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
