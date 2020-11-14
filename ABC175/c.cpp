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
    ll x, k, d;
    cin >> x >> k >> d;
    ll q = x >= 0 ? x / d : -x / d;
    if (q > k) {
        ll ans = x >= 0 ? x - d * k : -x + k * d;
        cout << ans << endl;
        return 0;
    }
    ll r = x >= 0 ? x % d : -(-x % d);
    if ((k - q) % 2) {
        if (r >= 0) cout << abs(r - d) << endl;
        else cout << abs(r + d) << endl;
    }
    else cout << abs(r) << endl;
    return 0;
}