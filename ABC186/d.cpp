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


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    FOR (i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll s = 0;
    ll ans = 0;
    FOR (j, 0, n) {
        ans += (ll) a[j] * j;
        ans -= s;
        s += a[j];
    }
    cout << ans << endl;
    return 0;
}