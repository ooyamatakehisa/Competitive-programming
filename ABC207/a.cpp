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
    int a, b ,c;
    cin >> a >> b >> c;
    vector<int> d(3);
    d[0] = a;
    d[1] = b;
    d[2] = c;
    sort(d.begin(), d.end());
    cout << d[1] + d[2] << endl;
    return 0;
}