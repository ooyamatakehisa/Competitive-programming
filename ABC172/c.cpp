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

// 二台の机 A, B があります。机 A には N 冊の本が、机 B には M 冊の本が、それぞれ縦に積まれています。 机 A に現在上から i 番目に積まれている本 ( 1 ≤ i ≤ N ) は
// 読むのに A i 分を要し、机 B に現在上から i 番目に積まれている本 ( 1 ≤ i ≤ M ) は読むのに B i 分を要します。 次の行為を考えます。 
// - 本が残っている机を選び、その机の最も上に積まれた本を読んで机から取り除く。 
// 合計所要時間が K 分を超えないようにこの行為を繰り返すとき、最大で何冊の本を読むことができるでしょうか。本を読むこと以外に要する時間は無視します。

int main(){
    int n, m; ll k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    vector<ll> sum_b(m + 1, 0);
    FOR (i, 0, n) cin >> a[i];
    FOR (i, 0, m) cin >> b[i];
    FOR (i, 0, m) sum_b[i + 1] += sum_b[i] + b[i];
    ll sum_a = 0;
    int ans = 0;
    FOR (i, 0, n + 1) {
        if (i) sum_a += a[i - 1];
        int l = -1, r = m + 1;
        if (sum_a > k) break;
        while (r - l > 1) {
            int c = (l + r) / 2;
            if (sum_b[c] + sum_a <= k) l = c;
            else r = c;
        }
        ans = max(ans, l + i);
    }
    cout << ans << endl;
    return 0;
}

// 二分探索の解法