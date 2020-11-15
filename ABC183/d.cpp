#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <climits>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
#define rep(i, n) for (int i = 0; i < (n)); ++i)
typedef long long ll;

const int mx = 2 * 1e5 + 5;

bool solve() {
    int n, w;
    cin >> n >> w;
    vector<vector<ll>> ss(mx, vector<ll>(0));
    vector<vector<ll>> ts(mx, vector<ll>(0));
    FOR (i, 0, n) {
        ll s, t, p;
        cin >> s >> t >> p;
        ss[s].push_back(p);
        ts[t].push_back(p);
    }
    ll use = 0;
    FOR (i, 0, mx) {
        for (auto s : ss[i]) {
            use += s;
        }
        for (auto t : ts[i]) {
            use -= t;
        }
        if (use > w) return false;
    }
    return true;
}

int main(){
    
    auto ans = solve() ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}