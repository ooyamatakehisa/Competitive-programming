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
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep (i, h) cin >> s[i];

    int ans = 0;
    rep (i, h - 1) rep (j, w - 1) {
        int cnt = 0;
        rep (di, 2) rep(dj, 2) if (s[i + di][j + dj] == '#') cnt++;
        if (cnt == 1 || cnt == 3) ++ans;
    }
    cout << ans << endl;
    return 0;
}