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
    int n, x;
    int sum = 0;
    cin >> n >> x;
    rep (i, n) {
        int a;
        cin >> a;
        sum += a;
        if ((i + 1) % 2 == 0) sum--;
    }
    if (x >= sum) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}