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


// あなたはオンラインゲーム「ATChat」のチュートリアルを終え、その場に居合わせたプレイヤー N 人で早速とある場所を訪ねることにしました。
// この N 人には 1 から N の番号が振られており、人 i ( 1 ≤ i ≤ N ) の フレンドリーさ は A i です。 
// 訪ねる際、 N 人は好きな順番で 1 人ずつ到着します。あなたたちは迷子にならないために、既に到着した人たちで環状に並び、
// 新たに到着した人は好きな位置に割り込んで加わるというルールを決めました。 最初に到着した人以外の各人は、割り込んだ位置から到着した時点で
// 「時計回りで最も近い人」と「反時計回りで最も近い人」のフレンドリーさのうち小さい方に等しい 心地よさ を感じます。最初に到着した人の心地よさは 0 です。 
// N 人が到着する順番や割り込む位置を適切に決めたとき、 N 人の心地よさの合計の最大値はいくらになるでしょう？

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    FOR (i, 0, n) cin >> a[i];
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    int t = n - 1;
    FOR (i, 0, n) {
        int lim = 2;
        if (i == 0) lim = 1;
        FOR (j, 0, lim) {
            if (t > 0) {
                ans += a[i];
                t--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}