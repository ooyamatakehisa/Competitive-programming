#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <set>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

const int MX = 1e9;

int count(vector<int> a, int x) {
    int cnt = 0;
    FOR (i, 0, a.size() - 1) {
        if (a[i] == x) cnt++;
    }
    return cnt;
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    x--; y--;
    vector<vector<int>> e(n);
    FOR (i, 0, n) {
        if (i != 0) e[i].push_back(i - 1);
        if (i != n - 1) e[i].push_back(i + 1);
        if (i == x) e[i].push_back(y);
        if (i == y) e[i].push_back(x);
    }
    queue<int> qqq;
    vector<set<pair<int, int>>> cnt(n + 1);
    FOR (i, 0, n) {
        vector<int> d(n, MX);
        qqq.push(i);
        d[i] = 0;
        while (!qqq.empty()) {
            int v = qqq.front();
            qqq.pop();
            for (auto vt : e[v]) {
                if (d[vt] > d[v] + 1) {
                    d[vt] = d[v] + 1;
                    qqq.emplace(vt);
                }
            }
        }
        FOR (j, 0, n) {
            cnt[d[j]].insert(make_pair(min(i, j), max(i, j)));
        }
    }
    FOR (i, 0, n - 1) {
        cout << cnt[i + 1].size() << endl;
    }
    return 0;
}