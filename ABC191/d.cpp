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
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    double x, y, r;
    cin >> x >> y >> r;
    int ix = round(x * 1e4);
    int iy = round(y * 1e4);
    int ir = round(r * 1e4);
    int ans = 0;
    for (int i = ceil(x - r); i <= floor(x + r); i++) {
        double i4 = i * 1e4;
        double tmp_y1 = iy + sqrt((ir - i4 + ix) * (ir + i4 -ix));
        double tmp_y2 = iy - sqrt((ir - i4 + ix) * (ir + i4 -ix));
        ans += floor(tmp_y1 / 1e4) - ceil(tmp_y2 / 1e4) + 1;
    }
    cout << ans << endl;
    return 0;
}