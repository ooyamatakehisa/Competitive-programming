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

// 整数 X と、長さ N の整数列 p 1 , … , p N が与えられます。 
// 整数列 p 1 , … , p N に含まれない整数 (正とは限らない) のうち X に最も近いもの、つまり X との差の絶対値が最小のものを求めてください。
// そのような整数が複数存在する場合は、そのうち最も小さいものを答えてください。

int main(){
    int x, n;
    cin >> x >> n;
    vector<int> d(102);
    FOR (i, 0, n) {
        int p;
        cin >> p;
        d[p] = 1;
    }
    pair<int, int> ans(9999, -1);
    for (int i = 0; i <= 101; ++i) {
        if (d[i] == 1) continue;
        int dif = abs(x - i);
        ans = min(ans, make_pair(dif, i));

    }
    cout << ans.second << endl;
    return 0;
}