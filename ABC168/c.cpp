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

// 時針と分針の長さがそれぞれAセンチメートル、Bセンチメートルであるアナログ時計を考えます。
// 時針と分針それぞれの片方の端点は同じ定点に固定されており、この点を中心としてそれぞれの針は一定の角速度で時計回りに回転します。
// 時針は12時間で、分針は1時間で1周します。0時ちょうどに時針と分針は重なっていました。
// ちょうどH時M分になったとき、2本の針の固定されていない方の端点は何センチメートル離れているでしょうか。

const double PI = acos(-1);

int main(){
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    int minutes = h * 60 + m;
    double hx = a * cos(minutes * 0.5 * PI / 180);
    double hy = a * sin(minutes * 0.5 * PI / 180);
    double mx = b * cos(minutes * PI / 30);
    double my = b * sin(minutes * PI / 30);
    double ans = sqrt((hx - mx) * (hx - mx) + (hy - my) * (hy - my));
    printf("%.10f\n", ans);
    // cout << ans << endl;
    return 0;
}