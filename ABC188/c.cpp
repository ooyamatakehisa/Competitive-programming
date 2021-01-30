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

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    int lmx = 0, lidx = 0, rmx = 0, ridx = 0;
    FOR (i, 0, (int) pow(2, n-1)) {
        int ai;
        cin >> ai;
        lmx = max(ai, lmx);
        lidx = lmx == ai ? i + 1 : lidx;
    }
    FOR (i, 0, (int) pow(2, n-1)) {
        int bi;
        cin >> bi;
        rmx = max(bi, rmx);
        ridx = rmx == bi ? i + 1 + (int) pow(2, n-1) : ridx;
    }
    int mx = min(lmx, rmx);
    int ans = mx == lmx ? lidx : ridx;
    cout << ans << endl;
    return 0;
}