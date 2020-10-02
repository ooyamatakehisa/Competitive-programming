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

const int INF = 1e9;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main(){
    int h, w, si, sj, ti, tj;
    cin >> h >> w;
    cin >> si >> sj;
    cin >> ti >> tj;
    --si; --sj; --ti; --tj;

    vector<string> s(h);
    FOR (i, 0, h) cin >> s[i];

    vector<vector<int>> dist(h, vector<int>(w, INF));
    dist[si][sj] = 0;

    deque<pair<int, int>> q;
    q.emplace_back(si, sj);

    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        int d = dist[i][j];
        q.pop_front();

        FOR (k, 0, 4) {
            int ni = i + di[k], nj = j + dj[k];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '#') continue;
            if (dist[ni][nj] <= d) continue;
            dist[ni][nj] = d;
            q.emplace_front(ni, nj);
        }
        for (int ei = -2; ei <= 2; ++ei) {
            for (int ej = -2; ej <= 2; ++ej) {
                int ni = i + ei, nj = j + ej;
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '#') continue;
                if (dist[ni][nj] <= d + 1) continue;
                dist[ni][nj] = d + 1;
                q.emplace_back(ni, nj);
            }
        }
    }
    int ans = dist[ti][tj];
    if (ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}