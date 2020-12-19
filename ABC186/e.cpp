#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <climits>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int solve() {
    ll n, s, k;
    cin >> n >> s >> k;
    ll gcdd = gcd(n, k);
    if (gcdd != 1 && s % gcdd != 0) {
        return -1;
    }
    n /= gcdd;
    k /= gcdd;
    vector<int> flag(n, 0);
    int nxt = s / gcdd;
    ll cnt = 0;
    while (flag[nxt] == 0) {
        ll prenxt = nxt;
        int syo = (n - nxt) / k + 1;
        cnt += syo;
        nxt += syo * k;
        // while (nxt < n) {
        //     nxt += k;
        //     cnt++;
        // }
        nxt %= n;
        flag[prenxt] = nxt;
        if (nxt == 0) break;
    }
    if (nxt == 0) {
        return cnt;
    }
}


int main(){
    int t;
    cin >> t;
    vector<ll> ans;
    FOR (i, 0, t) {
        // cout << solve() << endl;
        ans.push_back(solve());
    }
    for (auto e: ans) cout << e << endl;
    return 0;
}