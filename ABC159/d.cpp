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

const int int_mx = 1e5 * 2 + 1;

int main(){
    int n;
    cin >> n;
    vector<ll> cnt(int_mx, 0);
    vector<ll> comb1(int_mx, 0);
    vector<ll> comb2(int_mx, 0);
    vector<ll> as(n);
    FOR (i, 0, n) {
        ll a;
        cin >> a;
        cnt[a]++;
        as[i] = a;
    }
    ll sum = 0;
    FOR (i, 0, int_mx) {
        ll cnt_a = cnt[i];
        if (cnt_a >= 2) {
            comb1[i] = cnt_a * (cnt_a - 1) / 2;
            sum += comb1[i];
            comb2[i] = (cnt_a - 2) * (cnt_a - 1) / 2;
        }
    }
    for (auto a : as) {
        cout << sum - comb1[a] + comb2[a] << endl;
    }
    return 0;
}