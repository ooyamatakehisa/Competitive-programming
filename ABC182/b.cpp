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
    vector<int> a(n);
    int mx = 0;
    FOR (i, 0, n) {
        int ai;
        cin >> ai;
        a[i] = ai;
        mx = max(mx, ai);
    }
    int mx2 = 0;
    int ans = 0;
    FOR (k, 2, mx + 1) {
        vector<int> g(mx + 1);
        int ki = k;
        int i = 1;
        while(ki <= mx) {
            g[ki] += 1;
            i++;
            ki = k * i;
        }
        int score = 0;
        for (auto ai : a) {
            score += g[ai];
        }
        if (score > mx2) {
            mx2 = score;
            ans = k;
        }
    }
    cout << ans << endl;
    return 0;
}