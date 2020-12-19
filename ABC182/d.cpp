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
    vector<ll> cumsuma(n);
    FOR (i, 0, n) {
        int ai;
        cin >> ai;
        if (i == 0) cumsuma[i] = ai;
        else cumsuma[i] = ai + cumsuma[i - 1];
    }
    ll mx = 0;
    ll sumcumsum = 0;
    ll ans = 0;
    FOR (i, 0, n) {
        if (sumcumsum + mx > ans) ans = sumcumsum + mx;
        sumcumsum += cumsuma[i];
        if (sumcumsum > ans) ans = sumcumsum;
        if (cumsuma[i] > mx) mx = cumsuma[i];
    }
    cout << ans << endl;
    return 0;
}