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

template <typename T>
vector<pair<T, T>> prime_factor(T n) {
    vector<pair<T, T>> ret;
    for (T i = 2; i * i <= n; i++) {
        T cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        ret.push_back(make_pair(i, cnt));
    }
    if (n != 1) ret.push_back(make_pair(n, 1));
    return ret;
}

int main(){
    ll n;
    cin >> n;
    ll n2 = n * 2;
    int ans = 0;
    auto check = [&](ll l) {
        ll tmp = n2 / l - l + 1;
        if (abs(tmp) % 2 == 0) ++ans;
    };
    for (ll x = 1; x * x <= n2; x++) {
        if (n2 % x) continue;
        check(x);
        if (x != y) check(y);

    }
    cout << ans << endl;
    return 0;
}