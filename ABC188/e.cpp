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

// 高橋国には、町 1 から町 N までの N 個の町があります。 また、この国には道 1 から道 M までの M 本の道があります。
// 道 i を使うと、町 X i から町 Y i へ移動することができます。逆向きへは移動できません。ここで X i < Y i であることが保証されます。 
// この国では金の取引が盛んであり、町 i では、金 1 k g を A i 円で売ったり買ったりすることができます。 
// 旅商人である高橋君は、高橋国内のある町で金を 1 k g だけ買い、いくつかの道を使った後、買った町とは別の町で金を 1 k g だけ売ろうと考えています。 
// このとき、高橋君の利益 (すなわち ( 金を売った価格 ) − ( 金を買った価格 ) ) として考えられる最大値を求めてください。

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    FOR (i, 0, n) cin >> x[i];
    vector<vector<int>> to(n);
    FOR (i, 0, m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
    }
    const int INF = 1001001001;
    vector<int> dp(n, INF * 2);
    int ans = -INF;
    FOR (i, 0, n) {
        ans = max(ans, x[i] - dp[i]);
        for (int j : to[i]) {
            dp[j] = min(dp[j], dp[i]);
            dp[j] = min(dp[j], x[i]);
        }
    }
    cout << ans << endl;
}