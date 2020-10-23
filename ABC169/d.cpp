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
    vector<pair<ll, ll>> a = prime_factor(n);
    ll ans = 0;
    for (pair<ll, ll> x : a) {
        int factor = x.first;
        int cnt = x.second;
        int i = 0;
        while (cnt >= 0) {
            ans++; 
            i++;
            cnt -= i;
        }
        ans--;
    }
    cout << ans << endl;
    return 0;
}