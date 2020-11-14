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
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> ps(n + 1);
    vector<ll> cs(n + 1);
    FOR (i, 1, n + 1) cin >> ps[i];
    FOR (i, 1, n + 1) cin >> cs[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1));
    vector<int> bp(n + 1);
    int argi = 0;
    ll mx = LONG_MIN;
    int last = k < n ? k : n;
    FOR (i, 1, n + 1) {
        bp[1] = ps[i];
        dp[i][1] = cs[ps[i]];
        FOR (j, 2, last + 1) {
            bool whch = dp[i][j - 1] > cs[ps[bp[j - 1]]] + dp[i][j - 1];
            bp[j] = whch ? bp[j - 1] : ps[bp[j - 1]];
            dp[i][j] = whch ? dp[i][j - 1] : cs[ps[bp[j - 1]]] + dp[i][j - 1];
        }
        if (dp[i][n] > mx) {
            mx = dp[i][n];
            argi = i;
        }
    }
    ll ans;
    if (k < n) { ans = mx; }
    else {
        ll r = k % n;
        ll q = k / n;
        ans = q * mx + dp[argi][r];
    }
    cout << ans << endl;
    return 0;
}