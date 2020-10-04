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

// H 行 W 列に並ぶマスからなるマス目があります。
// 上から i 行目、左から j 列目 ( 1 ≤ i ≤ H , 1 ≤ j ≤ W ) のマスの色は文字 c i , j として与えられ、 c i , j が . のとき白、# のとき黒です。 
// 次の操作を行うことを考えます。 
// - 行を何行か選び ( 0 行でもよい)、列を何列か選ぶ ( 0 列でもよい)。そして、選んだ行に含まれるマスと、選んだ列に含まれるマスをすべて赤く塗る。 
// 正の整数 K が与えられます。操作後に黒いマスがちょうど K 個残るような行と列の選び方は何通りでしょうか。
// ここで、二つの選び方は、一方においてのみ選ばれる行または列が存在するときに異なるとみなされます。

int main(){
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> c(h);
    FOR (i, 0, h) cin >> c[i];
    int cnt = 0;
    FOR (si, 0, 1 << h) FOR (sj, 0, 1 << w) {
        int kcnt = 0;
        FOR (i, 0, h) FOR (j, 0, w) if ((si>>i & 1) && (sj>>j & 1) && (c[i][j] == '#')) kcnt++; 
        if (kcnt == k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}