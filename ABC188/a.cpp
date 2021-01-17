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
    int x, y;
    cin >> x >> y;
    int mn = min(x, y);
    int mx = max(x, y);
    string ans = mx - 3 < mn ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}