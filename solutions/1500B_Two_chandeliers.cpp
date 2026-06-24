// Problem: Two chandeliers
// URL: https://codeforces.com/problemset/problem/1500/B
// Rating: 2200
// Tags: binary search, brute force, chinese remainder theorem, math, number theory
// Language: C++17 (GCC 7-32)
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
int c[1100000][2];
ll n, m, k;
vector<ll> col;

ll gcd(ll a, ll b){
    return b==0? a: gcd(b, a%b);
}

ll ex_gcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll r=ex_gcd(b,a%b,x,y);
    ll t=x;
    x=y;
    y=t-a/b*y;
    return r;
}

int main(){
    col.clear();
    for(int i=1; i<1100000; i++) for(int j=0; j<=1; j++) c[i][j]=-1;
    scanf("%lld%lld%lld", &n, &m, &k);
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        c[num][0]=i-1;
    }
    for(int i=1; i<=m; i++){
        scanf("%d", &num);
        c[num][1]=i-1;
    }
    ll mn=gcd(m, n);
    m/=mn; n/=mn;
    ll x, y;
    ll t=ex_gcd(n, m, x, y);
    ll mod=m*n*mn;
    for(int i=1; i<1100000; i++){
        if(c[i][0]==-1 || c[i][1]==-1) continue;
        if((c[i][1]-c[i][0])%mn) continue;
        ll fir=(c[i][1]-c[i][0]);
        fir*=n; fir%=mod; fir*=x; fir%=mod; fir+=c[i][0];
        fir=((fir%mod)+mod)%mod;
        col.push_back(fir);
    }
    ll l=0, r=2e18;
    ll cnt=0;
    while(l!=r){
        ll mid=(l+r)/2;
        cnt=0;
        for(auto fir:col){
            if(mid%mod>=fir) cnt++;
            cnt+=mid/mod;
        }
        if(mid+1-cnt>=k) r=mid;
        else l=mid+1;
    }
    printf("%lld\n", l+1);
}
