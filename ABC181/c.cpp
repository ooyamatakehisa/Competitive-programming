#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    FOR (i, 0, n) {
        int x, y;
        cin >> x >> y;
        p.emplace_back(x, y);
    }
    int len = p.size();
    int cnt = 0;
    FOR (a, 0, len - 2) FOR (b, a + 1, len - 1) FOR (c, b + 1, len) {
        int ax = p[a].first;
        int ay = p[a].second;
        int bx = p[b].first;
        int by = p[b].second;
        int cx = p[c].first;
        int cy = p[c].second;
        if (2 * cy *  (bx - ax) == 2 * (by - ay) * cx + ((ay + by) * (bx - ax) - (by - ay) * (ax + bx))) {
            cnt++;
        }
    }
    if (cnt > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}