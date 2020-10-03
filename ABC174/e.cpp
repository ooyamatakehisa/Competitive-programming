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

// 丸太が N 本あり、それぞれ長さは A 1 , A 2 , ⋯ , A N です。 これらの丸太を合計 K 回まで切ることができます。 
// 長さ L の丸太を片端から t ( 0 < t < L ) の位置で切ると、長さ t , L − t の丸太に分かれます。 
// 丸太を合計 K 回まで切った後最も長い丸太の長さが最小でいくつになるか求め、小数点以下を切り上げた値を出力してください。

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    FOR (i, 0, n) cin >> a[i];
    int l = 0, r = 1e9;
    while (r - l > 1) {
        int x = (l + r) / 2;
        auto f = [&] (int x) {
            ll now = 0;
            FOR (i, 0, n) now += (a[i] - 1) / x;
            return now <= k;
            
        };
        if (f(x)) r = x; else l = x;
    }
    cout << r << endl;
    return 0;
}

// 直感的には一番長いやつをきっていく、2回目同じ木を切るときはちょうど三等分になるように切り直す。この貪欲法をくりかえす。
// だたこれだとpriority queue つかっても時間かかる。
// こんかいは全ての木をｘ以下にできるかという関数ｆをつくってそのxで二分探索