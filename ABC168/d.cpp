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

const int INTMAX = 1e9;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> d(n, INT_MAX);
    vector<int> p(n);
    vector<vector<int>> e(n);
    queue<int> q;
    FOR (i, 0, m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    q.emplace(0);
    d[0] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto next_v : e[v]) {
            if (d[next_v] > d[v] + 1) {
                d[next_v] = d[v] + 1;
                p[next_v] = v;
                q.emplace(next_v);
            }
        }
    }
    cout << "Yes" << endl;
    FOR (i, 1, n) {
        cout << p[i] + 1 << endl;
    }
    return 0;
}