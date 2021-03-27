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
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> ss(h);
    rep(i, h) cin >> ss[i];
    int ans = 1;
    for(int i = x; i < h; i++) {
        if (x > h) break;
        if (ss[i][y - 1] == '#') break;
        ans++;
    }
    for(int i = x - 2; i >= 0; i--) {
        if (x - 2 < 0) break;
        if (ss[i][y - 1] == '#') break;
        ans++;
    }
    for(int i = y; i < w; i++) {
        if (y > w) break;
        if (ss[x - 1][i] == '#') break;
        ans++;
    }
    for(int i = y - 2; i >= 0; i--) {
        if (y - 2 < 0) break;
        if (ss[x - 1][i] == '#') break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}