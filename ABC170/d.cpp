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

// 長さNの数列Aが与えられます。次の性質を満たす整数i(1≤i≤N)の数を答えてください。i≠jである任意の整数j(1≤j≤N)についてAiはAjで割り切れない

const int MAX = 1e6 + 1;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(MAX, 0);
    int mx = -1;
    FOR (i, 0, n) {
        cin >> a[i];
        cnt[a[i]]++;
        mx = max(mx, a[i]);
    }

    for (int i = 1; i <= mx; i++) {
        if (cnt[i] == 0) continue;
        for (int j = 2 * i; j <= mx; j += i) {
            cnt[j] ++;
        }
    }
    int ans = 0;
    FOR (i, 0, n) {
        if (cnt[a[i]] == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}