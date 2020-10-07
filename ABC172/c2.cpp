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
    int n, m; ll k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);

    FOR (i, 0, n) cin >> a[i];
    FOR (i, 0, m) cin >> b[i];

    ll t = 0;
    FOR (i, 0, m) t += b[i];
    int j = m, ans = 0;

    FOR (i, 0, n + 1) {
        while (j < 0 && t > k) {
            --j;
            t -= b[j];
        }
        if (t > k) break;
        ans = max(ans, j + i);
        if (i == n) break;
        t += a[i];
    }
    cout << ans << endl;
    return 0;
}

// 尺取法のやりかた