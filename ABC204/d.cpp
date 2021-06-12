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
    bitset<100001> dp;
    dp[0] = 1;
    int tot = 0;
    rep (i, n) {
        int t;
        cin >> t;
        tot += t;
        dp |= dp << t;
    } 
    int ans = tot;
    rep (i, tot+1) if (dp[i]) ans = min(ans, max(i, tot - i));
    cout << ans << endl;
    return 0;
}