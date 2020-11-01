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
    int k, n;
    cin >> k >> n;
    int pre_a = 0;
    vector<int> diff(n);
    FOR (i, 0, n) {
        int a;
        cin >> a;
        diff[i] = a - pre_a;
        pre_a = a;
    }
    diff[0] += k - pre_a;
    sort(diff.rbegin(), diff.rend());
    int ans = k - diff[0];
    cout << ans << endl;
    return 0;
}