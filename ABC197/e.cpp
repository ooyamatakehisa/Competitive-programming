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
    int n;
    cin >> n;
    priority_queue<P> xc(n);
    rep (i, n) {
        int x, c;
        cin >> x >> c;
        xc.emplace_back(c, x)
    }
    int prex = 0;
    while (xc.front().second != pre){
        prex = xc.front().second;
    }
    return 0;
}