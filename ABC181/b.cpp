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
    cin >> n;
    ll ans = 0;
    FOR (i, 0, n) {
        ll a, b;
        cin >> a >> b;
        ans += b * (b + 1) / 2 - a * (a - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}