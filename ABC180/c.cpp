#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i) continue;
        s.insert(i);
        s.insert(n / i);
    }
    for (ll a : s) cout << a << endl;
    return 0;
}