// Problem: Let's Go Hiking
// URL: https://codeforces.com/problemset/problem/1496/D
// Rating: 1900
// Tags: games
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int n, p[110000];
multiset<pair<int, int>> a;

int main(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &p[i]);
    a.clear();
    for(int i=1; i<=n; i++){
        if(i==n) break;
        int l=1, pos=i;
        if(p[i+1]>p[i]){
            while(i<n && p[i+1]>p[i]){
                i++;
                pos++;
                l++;
            }
            a.insert(make_pair(l, pos));
        }
        else{
            while(i<n && p[i+1]<p[i]){
                i++;
                l++;
            }
            a.insert(make_pair(l, pos));
        }
        i--;
    }
    bool can=true;
    auto it=a.end();
    it--;
    auto p1=it;
    if(it!=a.begin()){
        it--;
        if((*it).first==(*p1).first){
            if((*it).second!=(*p1).second){
                can=false;
            }
            if(can && it!=a.begin()){
                it--;
                if((*it).first==(*p1).first) can=false;
            }
        }
    }
    if(can){
        int pos=(*p1).second; int l1=1, l2=1;
        while(pos>1 && p[pos-1]<p[pos]){ pos--; l1++;}
        pos=(*p1).second;
        while(pos<n && p[pos+1]<p[pos]){ pos++; l2++;}
        int m1=min(l1, l2), m2=max(l1, l2);
        if(m1%2 && m2>m1) can=false;
        else if(m1%2==0) can=false;
    }
    if(can) printf("1\n");
    else printf("0\n");
}
