#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int main(){
    int h, w, m;
    cin >> h >> w >> m;
    vector<int> hc(h), wc(w);
    set<pair<int, int>> S;
    FOR (i, 0, m) {
        int r, c;
        cin >> r >> c;
        --r; --c;
        hc[r]++; wc[c]++;
        S.emplace(r, c);
    }
    int mh = 0, mw = 0;
    for (int e : hc) mh = max(mh, e);
    for (int e : wc) mw = max(mw, e);

    vector<int> is, js;
    FOR (i, 0, h) if (mh == hc[i]) is.push_back(i);
    FOR (j, 0, w) if (mw == wc[j]) js.push_back(j);

    int ans = mh + mw;
    for (int i : is) for (int j : js) {
        if (S.count(make_pair(i, j))) continue;
        cout << ans << endl;
        return 0;
    }
    --ans;
    cout << ans << endl;
    return 0;
}