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
    int h, w;
    cin >> h >> w;
    int m = 1e9;
    vector<vector<int>> as(h, vector<int>(w));
    FOR (i, 0, h) FOR (j, 0, w) {
        int aij;
        cin >> aij;
        m = min(m, aij);
        as[i][j] = aij;
    }
    int ans = 0;
    FOR (i, 0, h) FOR (j, 0, w) {
        if (m < as[i][j]) {
            ans += as[i][j] - m;
        }
    }
    cout << ans << endl;
    return 0;
}