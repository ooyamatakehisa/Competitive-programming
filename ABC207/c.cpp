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
    vector<pair<double, double> > lr(n);
    rep (i, n) {
        int t;
        cin >> t >> lr[i].first >> lr[i].second;
        if (t == 2) lr[i].second -= 0.1;
        else if (t == 3) lr[i].first += 0.1;
        else if (t == 4) {
            lr[i].first += 0.1; lr[i].second -= 0.1;
        }
    }
    ll ans = 0;
    rep (i, n) FOR (j, i + 1, n) {
        if (lr[i].first >= lr[j].first && lr[i].first <= lr[j].second) ans++;
        else if (lr[j].first >= lr[i].first && lr[j].first <= lr[i].second) ans++;
    }
    cout << ans << endl;
}