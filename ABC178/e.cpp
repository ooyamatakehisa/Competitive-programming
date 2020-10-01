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


// 二次元平面上に N 個の点があり、i 番目の点の座標は (xi,yi) です。 同じ座標に複数の点があることもあります。 
// 異なる二点間のマンハッタン距離として考えられる最大の値はいくつでしょうか。
// ただし、二点 (xi,yi) と (xj,yj) のマンハッタン距離は |xi−xj|+|yi−yj| のことをいいます。


int main(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    FOR (i, 0, n) {
        int x, y;
        cin >> x >> y;
        a[i] = x + y;
        b[i] = x - y;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = max(a.back() - a[0], b.back() - b[0]);
    cout << ans << endl;
    return 0;
}

// マンハッタン距離は45度回転の座標変換をするとよい？ x'=x-y, y'=x+y
// max(|x'i-x'j|,|y'i-y'j|)

//　別解
// |a| = max(a, -a)とかけるから max(|xi-xj|+|yi-yj|)=max(max(xi-xj,-xi+xj)+max(yi-yj,-yi+yj))=
//     = max(xi+yi-xj-yj,xi-yi-(xj-yj),-(xi-yi)+xj-yj,-(xi+yi)+(xj+yj))
//     = max(|xi+yi−(xj+yj)|,|xi−yi−(xj−yj)|)
