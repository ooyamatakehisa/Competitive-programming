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
    vector<int> w(n);
    rep (i, n) cin >> w[i];
    int ans = 1e9;
    rep (i, n - 1) {
        int s1 = 0, s2 = 0;
        FOR (j, 0, n) {
            if (j <= i) s1 += w[j];
            else s2 += w[j];
        }
        ans = min(ans, abs(s2- s1));
    }
    cout << ans << endl;
    return 0;
}