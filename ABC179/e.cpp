#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>


using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;


// x  を m で割った余りを f(x,m) と表します。初期値 A1=X および漸化式 An+1=f(A2n,M) で定まる数列を A とします。 N∑i=1 Ai を求めてください。


int main(){
    ll n, x, m;
    cin >> n >> x >> m;
    vector<int> id(m,-1);
    vector<int> a;
    int len = 0;
    ll tot = 0;
    while (id[x] == -1) {
        a.push_back(x);
        id[x] = len;
        len++;
        tot += x;
        x = (x*x)%m;
    }
    
    int c = len-id[x];
    ll s = 0;
    for (int i = id[x]; i < len; ++i) s += a[i];
    
    ll ans = 0;
    if (n <= len) {
        rep(i,n) ans += a[i];
    } else {
        ans += tot;
        n -= len;
        ans += s*(n/c);
        n %= c;
        rep(i,n) ans += a[id[x]+i];
    }
    cout << ans << endl;
    return 0;
}


// 周期性の検出あるある。ダブリングという方法もある？


