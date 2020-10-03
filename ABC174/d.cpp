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

// 祭壇に、左から右へと一列に並ぶ N 個の石が祀られています。
// 左から i 個目 ( 1 ≤ i ≤ N ) の石の色は文字 c i として与えられ、 c i が R のとき赤、W のとき白です。 
// あなたは、以下の二種の操作を任意の順に何度でも行うことができます。 
// - 石を 2 個選び (隣り合っていなくてもよい)、それらを入れ替える。 
// - 石を 1 個選び、その石の色を変える (赤なら白に、白なら赤に)。 占い師によると、赤い石の左隣に置かれた白い石は災いを招きます。
// そのような白い石がない状態に至るには、最小で何回の操作が必要でしょうか。

int main() {
    int n, cnt = 0;
    string c;
    cin >> n;
    cin >> c;
    int s = 0, e = n - 1;
    while (true) {
        while (c[s] != 'W') {
            s++;
            if (s >= n - 1) break;
        }
        while (c[e] != 'R') {
            e--; 
            if (e <= 0) break;
        }
        if (s >= e) break;
        s++; e--; cnt++;
        if (s >= n || e < 0) break;
    }
    cout << cnt << endl;
    return 0;
}