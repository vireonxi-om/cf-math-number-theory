// Problem: RPD and Rap Sheet (Hard Version)
// URL: https://codeforces.com/problemset/problem/1543/D2
// Rating: 2200
// Tags: brute force, constructive algorithms, interactive, math
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
const ll M=1000000007;
vector<int> num;

int sum(int a, int b){
    num.clear();
    int t1, t2;
    while(a || b){
        t1=a%k; t2=b%k;
        num.push_back((t1+t2)%k);
        a/=k; b/=k;
    }
    int t=num.size(), result=0, now=1;
    for(int i=0; i<t; i++){
        result+=now*num[i];
        now*=k;
    }
    return result;
}

int sub(int a, int b){
    num.clear();
    int t1, t2;
    while(a || b){
        t1=a%k; t2=b%k;
        num.push_back((t1-t2+k)%k);
        a/=k; b/=k;
    }
    int t=num.size(), result=0, now=1;
    for(int i=0; i<t; i++){
        result+=now*num[i];
        now*=k;
    }
    return result;
}

void solve(){
    scanf("%d%d", &n, &k);
    bool cont=true;
    int tnow=0, test=0, now=0, t, r;
    while(cont){
        if(now%2==0){
            t=sum(tnow, test);
            tnow=test;
        }
        else{
            t=sub(tnow, test);
            tnow=sub(0, test);
        }
        printf("%d\n", t);
        fflush(stdout);
        scanf("%d", &r);
        if(r){
            cont=false;
        }
        else{
            test++; now++;
        }
    }

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}