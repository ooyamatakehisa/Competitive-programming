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
    double n, x0, y0, xn2, yn2;
    cin >> n >> x0 >> y0 >> xn2 >> yn2;
    double rad = 2 * acos(-1) / n;
    double xcenter = (x0 + xn2) / 2;
    double ycenter = (y0 + yn2) / 2;
    double xx = x0 - xcenter;
    double yy = y0 - ycenter;
    double xx1 = xx * cos(rad) - yy * sin(rad);
    double yy1 = xx * sin(rad) + yy * cos(rad);
    printf("%.10f\n", xx1 + xcenter);
    printf("%.10f\n", yy1 + ycenter);
    return 0;
}