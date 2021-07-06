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
    int p;
    cin >> p;
    vector<int> coin(10);
    rep (i, 10) {
        int x = 1;
        for (int j = i + 1; j > 0; j--) x *= j;
        coin[i] = x;
    }
    int ans = 0;
    for (int i = 10; i > 0; i--) {
        ans += p / coin[i - 1];
        p %= coin[i - 1];
    }
    cout << ans << endl; 
    return 0;
}