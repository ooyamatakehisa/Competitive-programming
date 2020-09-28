#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

// int main() {
//   ll l, r;
//   cin >> l >> r;
//   r = min(r, l+4038);
//   int ans = 2018;
//   for (ll i = l; i <= r; i++) {
//     for (ll j = i+1; j <= r; j++) {
//       int x = i*j%2019;
//       ans = min(ans, x);
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  ll x2 = 0;
  rep(i,n) {
    if (i%2) x2 -= a[i];
    else x2 += a[i];
  }
  vector<int> ans(n);
  ans[0] = x2/2;
  rep(i,n-1) {
    ans[i+1] = a[i]-ans[i];
  }
  rep(i,n) ans[i] *= 2;
  rep(i,n) printf("%d%c", ans[i], i==n-1?'\n':' ');
  return 0;
}