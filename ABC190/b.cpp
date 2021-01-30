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
typedef long long ll;

int main(){
    int n, s, d;
    cin >> n >> s >> d;
    rep (i, n) {
        int x, y;
        cin >> x >> y;
        if (x < s && y > d) {
            cout << "Yes" << endl;
            return 0;
        }
        else {continue;}
    }
    cout << "No" << endl;
    return 0;
}