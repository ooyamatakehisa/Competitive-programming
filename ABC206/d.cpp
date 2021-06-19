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

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n, -1) {}
  int find(int x) {
    // 木の根のidを返す
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y); // 小さい方の木を大きい方の根にくっつけることで深さが長くならない
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    const int M = 2 * 1e5 + 5;
    UnionFind uf(M);
    rep (i, n) uf.unite(a[i], a[n - i - 1]);
    int ans = 0;
    rep (i, M) {
        if (uf.find(i) != i) continue;
        ans += uf.size(i) - 1;
    }
    cout << ans << endl;
    return 0;
}