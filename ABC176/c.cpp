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
    int n;
    cin >> n;
    ll sum = 0;
    int mx = 0;
    FOR (i, 0, n) {
        int ai;
        cin >> ai;
        if (ai > mx) {
            mx = max(ai, mx);
        } else {
            sum += mx - ai;
        }
    }
    cout << sum << endl;
    return 0;
}