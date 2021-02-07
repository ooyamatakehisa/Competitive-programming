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

int solve(vector<vector<P>> e, int n, int m, int s) {
    priority_queue<P, vector<P>, greater<P>> q;
    vector<int> w(n, 1e9);
    auto push = [&](int v, int d) {
        if (w[v] <= d) return;
        w[v] = d;
        q.emplace(d, v);
    };
    for (auto a : e[s]) push(a.first, a.second);
    // w[s] = 0;
    while (!q.empty()) {
        auto p = q.top();
        int tmpd = p.first;
        int i = p.second;
        q.pop();
        // この下の行必要詳しくはyoutube解説
        if (w[i] != tmpd) continue;
        for (auto&& v : e[i]) {
            push(v.first, tmpd + v.second);
        }
        // if (i == s && w[i] == 1e9) q.push(make_pair(-1e9, s));

    }
    return w[s] == 1e9 ? -1 : w[s];
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<P>> e(n);
    rep (i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        --a; --b;
        e[a].emplace_back(b, c);
    }
    rep (i, n) {
        cout << solve(e, n, m, i) << endl;
    }
    return 0;
}

