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
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    FOR (i, 0, n) {
        cin >> a[i];
    }
    FOR (i, 0, n) {
        cin >> b[i];
    }
    int sum = 0;
    FOR (i, 0, n) {
        sum += a[i] * b[i];
    }
    string ans = sum == 0 ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}