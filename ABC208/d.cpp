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
    int n, m;
    cin >> n >> m;
    const int INF = 1001001001;
    vector dist(n, vector<int>(n, INF));
    rep (i, n) dist[i][i] = 0;
    rep (i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        dist[a][b] = c;
    }
    ll ans = 0;
    rep (k, n) rep (i, n) rep (j, n) {
        dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
        if (dist[i][j] != INF) ans += dist[i][j];
    }
    cout << ans << endl;
    return 0;
}