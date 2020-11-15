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
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<pair<int, int>> ls(n);
    vector<pair<int, int>> bs(m);
    FOR (i, 0, n) {
        int x, y;
        cin >> x;
        --x; ls[i].first = x;
        cin >> y;
        --y; ls[i].second = y;
    }
    FOR (i, 0, m) {
        int x, y;
        cin >> x;
        --x; bs[i].first = x;
        cin >> y;
        --y; bs[i].second = y;
    }
    vector<vector<int>> hs(h, vector<int>(w, 0));
    vector<vector<int>> ws(h, vector<int>(w, 0));

    for (auto b : bs) {
        hs[b.first][b.second] = 2;
        ws[b.first][b.second] = 2;
    }

    for (auto l : ls) {
        int i = l.first;
        int j = l.second;
        if (hs[i][j] == 0) {
            FOR (k, i, h) {
                if (hs[k][j] == 2) break;
                hs[k][j] = 1;
            }
            for (int k = i; k >= 0; k--) {
                if (hs[k][j] == 2) break;
                hs[k][j] = 1;
            }
        }
        if (ws[i][j] == 0) {
            FOR (k, j, w) {
                if (hs[i][k] == 2) break;
                ws[i][k] = 1;
            }
            for (int k = j; k >= 0; k--) {
                if (hs[i][k] == 2) break;
                ws[i][k] = 1;
            }
        }
    }
    int ans = 0;
    FOR (i, 0, h) FOR (j, 0, w) {
        if (hs[i][j] == 1 || ws[i][j] == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}