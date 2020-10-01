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

// 人 1 から 人 N までの N 人の人がいます。「人 Ai と人 Bi は友達である」という情報が M 個与えられます。同じ情報が複数回与えられることもあります。
// X と Y が友達、かつ、Y と Z が友達ならば、X と Z も友達です。また、M 個の情報から導くことができない友達関係は存在しません。
// 悪の高橋君は、この N 人をいくつかのグループに分け、全ての人について「同じグループの中に友達がいない」という状況を作ろうとしています。
// 最小でいくつのグループに分ければ良いでしょうか？

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) { // x要素のrootノードを返す関数
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
  int size(int x) { return -d[find(x)];} // xが属する木のサイズを返す
};

int main(){
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    FOR (i, 0, m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        uf.unite(a, b);
    }
    int ans = 0;
    FOR (i, 0, n) {
        ans = max(ans, uf.size(i));
    }
    cout << ans << endl;
    return 0;
}