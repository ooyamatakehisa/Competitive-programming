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

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    vector<pair<int, int>> f(n, pair<int, int>(0, 0));
    FOR (i, 0, n) {
        cin >> a[i]; a[i]--;
    }

    int next = 0, cnt = 0;
    f[0].first = 1;
    
    while (true) {
        next = a[next]; cnt++;
        if (f[next].first) break;
        f[next].first = 1;
        f[next].second = cnt;
    }
    int si = f[next].second;
    int T = cnt - si;

    int step = (k < n) ? k : si + (k - si) % T;
    int ans = 0;
    FOR (ki, 0, step) ans = a[ans];
    cout << ans + 1  << endl;
    return 0;
}