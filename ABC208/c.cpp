#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <climits>

//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll, ll>;

int main(){
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> cook(n, k / n);
    rep (i, k % n) cook[i] += 1;
    vector<P> a;
    vector<ll> ans(n);
    rep (i, n) {
        ll ai;
        cin >> ai;
        a.emplace_back(ai, i);
    }
    sort(a.begin(), a.end());
    rep (i, n) {
        ans[a[i].second] = cook[i];
    }
    rep (i, n) cout << ans[i] << endl;
    return 0;
}