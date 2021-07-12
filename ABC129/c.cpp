#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>

//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    rep (i, m) {
        int ai;
        cin >> ai;
        a[ai] = 1;
    }
    vector<ll> dp(n + 1);

    dp[0] = 1;
    if (a[1] == 0) dp[1] = 1;
    FOR (i, 2, n + 1) {
        if (a[i - 1] == 0) {
            dp[i] += dp[i - 1];
            dp[i] %= mod;
        }
        if (a[i - 2] == 0) {
            dp[i] += dp[i - 2];
            dp[i] %= mod;
        }
    }
    cout << dp[n] << endl;
    return 0;
}