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
#define rep(i, n) for (int i = 0; i < (n)); ++i)
typedef long long ll;

struct A {
    vector<vector<int>> a;
    vector<ll> b;

    // initilization of A
    A(const vector<vector<int>>& _a = {{1, 0}, {0, 1}}, // default value
        const vector<ll>& _b = {0, 0}): a(_a), b(_b) {}
    
    // A に対して＊演算を定義している
    A operator*(const A& x) const {
        A res({{0, 0}, {0, 0}});
        rep(i, 2) rep(j, 2) rep(k, 2) {
            res.a[i][j] += x.a[i][k] * a[k][j];
        }
        res.b = A(x.a) * b;
        rep(i, 2) res.b[i] += x.b[i];
        return res;
    }
    vector<ll> operator*(const vector<ll>& x) const {
        vector<ll> res = b;
        rep(i, 2) rep(j, 2) res[i] += a[i][j] * x[j];
        return res;
    }
    void print() {
        printf("{");
        rep(i,2) printf("{%d,%d}", a[i][0], a[i][1]);
        printf("} + {%lld,%lld}\n", b[0], b[1]);
    }
};

int main(){
    int n;
    cin >> n;
    vector<vector<int> p(n);
    rep(i, n) cin >> p[i][0] >> p[i][1];
    
    int m;
    cin >> m;
    vector<A> d(1);
    rep (i, m) {
        int op;
        cin >> op;
        A x;
        if (op == 1) {
            x = A({{0, 1}, {-1, 0}});
        } else if (op == 2) {
            x = A({{0, -1}, {1, 0}});
        } else {
            int p;
            cin >> p;
            if (op == 3) x = A({{-1, 0}, {0, 1}}, {2 * p, 0});
            else x = A({{1, 0}, {0, -1}}, {0, 2 * p});
        }
        d.emplace_back(d.back() * x);
    }
    int q;
    cin >> q;
    vector<pair<pair<int,int>, int> qs;
    FOR (i, 0, q) {
        int a, b;
        cin >> a >> b;
        vector<ll> ans = d[a] * p[b];
        printf("%lld %lld\n", ans[0], ans[1]);
    }
    return 0;
}