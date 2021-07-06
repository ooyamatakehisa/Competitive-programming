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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b >= c * d) {
        cout << -1 <<  endl;
    } else { 
        cout << ceil(a / (c * d - b)) << endl;
    }

    return 0;
}