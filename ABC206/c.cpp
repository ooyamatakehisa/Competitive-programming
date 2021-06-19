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

// N個の整数からなる配列A=(A1,A2,...,AN)が与えられるので、次の条件を全て満たす整数組(i,j)の数を求めてください。
// 1≤i<j≤N
// Ai≠Aj

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0;
    ll pre = 0;
    FOR (i, 1, n) {
        if (a[i] == a[i - 1]) {
            ans += pre;
        } else {
            ans += i;
            pre = i;
        }
    }
    cout << ans << endl;
    return 0;
}

// すぬけ氏の別解
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  map<int, int> mp;
  ll ans = 0;
  rep(j,n) {
    ans += j-mp[a[j]];
    mp[a[j]]++;
  }
  cout << ans << endl;
  return 0;
}