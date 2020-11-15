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

int ans = 0;
int k = 0;


int search(set<int> remain, ll sum, int pre, vector<vector<int>> ts) {
    for (auto toshi : remain) {
        auto tmp = remain;
        int new_sum; 
        if (pre != 0) new_sum = sum + ts[pre][toshi];
        tmp.erase(toshi);
        if (!tmp.empty()) search(tmp, new_sum, toshi, ts);
        else {
            if (new_sum + ts[toshi][1] == k) ans++;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n >> k;
    vector<vector<int>> ts(n + 1, vector<int>(n + 1));
    FOR (i, 0, n) FOR (j, 0, n) cin >> ts[i + 1][j + 1];
    set<int> a;
    FOR (i, 1, n) a.insert(i + 1);
    search(a, 0, 1, ts);
    cout << ans << endl;
    return 0;
}