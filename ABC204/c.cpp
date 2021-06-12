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


vector<vector<int>> g;
vector<bool> tmp(2000);


void dfs(int i) {
    if (tmp[i]) return;
    tmp[i] = true;
    for (auto j : g[i]) dfs(j);
}

int main(){
    int n, m;
    int ans = 0;
    cin >> n >> m;
    g.resize(n);
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
    }

    rep (i, n) {
        rep (j, n) tmp[j] = false;
        dfs(i);
        rep (j, n) if (tmp[j]) ans++;
    }

    cout << ans << endl;
    return 0;
}