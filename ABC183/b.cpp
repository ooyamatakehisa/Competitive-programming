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
#define rep(i, n) for (int i = 0; i < (n)); ++i)
typedef long long ll;

int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double x = (gy * sx + sy * gx) / (gy + sy);
    printf("%.10f\n", x);
    return 0;
}