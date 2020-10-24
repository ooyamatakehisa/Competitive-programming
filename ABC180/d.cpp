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
    ll x, y;
    ll a, b;
    ll cnt = 0;
    cin >> x >> y >> a >> b;
    ll tmp = x;
    while (1) {
        if (y / a < tmp) break;
        if (a * tmp >= y) break;
        if (a * tmp >= tmp + b) break;
        tmp *= a;
        cnt++;
    }
    cnt += (y - tmp - 1) / b;
    cout << cnt << endl;
    return 0;
}