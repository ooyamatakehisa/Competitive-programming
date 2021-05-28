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
typedef long long ll;

void no_bug(int commit, vector<int> &as, vector<vector<int>> &e) {
    as[commit]++;
    for (auto commit_ : e[commit]) no_bug(commit_, as, e);
}

void args_parse(int a, int b, int n, vector<int> &as, vector<int> &bs, vector<vector<int>> &e) {
    rep (i, n) {
        string op; cin >> op;
        int v; cin >> v;
        e[i + 1].push_back(v);

        if (op == "MERGE") {
        int v2; cin >> v2;
        e[i + 1].push_back(v2);
        }
    }

    rep (i, a) {
        int ai; cin >> ai;
        as[ai]++;
        for (auto commit_ : e[ai]) no_bug(commit_, as, e);
    }
    rep (i, b) {
        int bi; cin >> bi;
        bs[bi]++;
    }
}

bool dfs(int commit, vector<int> &as, vector<int> &bs, vector<vector<int>> &e) {
    if (as[commit] > 0) return true;
    else if (bs[commit] > 0) return false;
    // else if (commit == 0) return false;
    
    bool ret = true;
    for (auto commit_ : e[commit]) ret = ret && dfs(commit_, as, bs, e);
    return ret;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<string> commits(n + 1);
    vector<vector<int>> e(n + 1);
    vector<int> as(n + 1), bs(n + 1);
    args_parse(a, b, n, as, bs, e);
    
    int ans = 0;
    FOR (commit, 1, n + 1) {
        if (as[commit] > 0) continue;
        bool ret = true;
        for (auto commit_ : e[commit]) {
            ret = ret && dfs(commit_, as, bs, e);
            // cout << ret << dfs(commit_, as, bs, e) << endl;
        }
        if (ret) ans++;
    }
    cout << ans << endl;
    return 0;
}