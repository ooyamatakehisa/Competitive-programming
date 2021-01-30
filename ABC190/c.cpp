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
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);

    FOR (i, 0, m) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    FOR (i, 0, k) {
        cin >> c[i] >> d[i];
        c[i]--; d[i]--;
    }
    int ans = -1;
    for (int i = 0; i < 1<<k; i++) {
        vector<int> sara(n);
        FOR (j, 0, k) {
            if(i>>j&1) sara[c[j]]++;
            else sara[d[j]]++;
        }
        int cnt = 0;
        FOR (s, 0, m) {
            if (sara[a[s]] > 0 && sara[b[s]] > 0) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}