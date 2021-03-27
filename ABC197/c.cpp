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
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<ll> as(n);
    rep (i, n) cin >> as[i];
    ll ans = 1e18;
    for (ll i = 0; i < 1 << (n - 1); i++) {
        ll pre = 0;
        vector<ll> ors;

        rep (j, n) {
            pre = pre | as[j];
            if (i >> j & 1) {
                ors.push_back(pre);
                pre = 0;
            }
        }
        ors.push_back(pre);

        int len = ors.size();
        ll xori = ors[0];
        FOR (k, 1, len) xori = xori ^ ors[k];
        ans = min(ans, xori);
    }
    cout << ans << endl;
    return 0;
}