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

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    FOR (i, 0, n) {
        cin >> a[i];
    }
    int mx = 0;
    FOR (i, 0, n) {
        int m = a[i];
        FOR (j, i, n) {
            m = min(m, a[j]);
            mx = max(mx, m * (j - i + 1));
        }
    }
    cout << mx << endl;
    return 0;
}


// ヒストグラムを一つの図形としてみてそのなかで一番おおきな長方形を探す方法
// 以下，すぬけのコード O(n)でとく
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// using ll = long long;
// using P = pair<int,int>;
 
// vector<int> getLeft(vector<int> a) {
//   int n = a.size();
//   vector<int> res(n);
//   stack<P> ps;
//   ps.emplace(0,-1);
//   rep(i,n) {
//     while (ps.top().first >= a[i]) ps.pop();
//     res[i] = ps.top().second;
//     ps.emplace(a[i],i);
//   }
//   return res;
// }
 
// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   rep(i,n) cin >> a[i];
//   vector<vector<int>> d;
//   rep(di,2) {
//     d.push_back(getLeft(a));
//     reverse(a.begin(),a.end());
//   }
//   vector<int> ls = d[0];
//   vector<int> rs = d[1];
//   reverse(rs.begin(),rs.end());
//   rep(i,n) rs[i] = n-1-rs[i];
//   int ans = 0;
//   rep(i,n) {
//     int now = a[i] * (rs[i]-ls[i]-1);
//     ans = max(ans, now);
//   }
//   cout << ans << endl;
//   return 0;
// }