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

int main() {
    int n; ll c;
    cin >> n >> c;
    map<int, ll> events;
    FOR (i, 0, n) {
        int a, b, c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b + 1] -= c;
    }
    ll ans = 0;
    ll s = 0;
    int pre = 0;
    for (auto event : events) {
        ans += min(c, s) * (event.first - pre);
        s += event.second;
        pre = event.first;
    }
    cout << ans << endl;
}


// O(M+N)の解法
// int main(){
//     int n, c;
//     cin >> n >> c;
//     vector<ll> start(1e9 + 2);　// こんな長い配列とれない！！
//     vector<ll> end(1e9 + 2);
//     ll maxb = 0;
//     FOR (i, 0, n) {
//         ll ai, bi, ci;
//         cin >> ai >> bi >> ci;
//         start[ai] += ci;
//         end[bi] += ci;
//         maxb = max(maxb, bi);
//     }
//     ll sum = 0;
//     ll daily = 0;
//     FOR (i, 1, maxb) {
//         daily += start[i];
//         sum += min(daily, (ll) c);
//         daily -= end[i];
//     }
//     cout << sum << endl;
//     return 0;
// }