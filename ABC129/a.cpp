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
    int p, q, r;
    cin >> p >> q >> r;
    vector<int> a;
    a.push_back(p);
    a.push_back(q);
    a.push_back(r);
    sort(a.begin(), a.end());
    cout << a[0] + a[1] << endl;
    return 0;
}