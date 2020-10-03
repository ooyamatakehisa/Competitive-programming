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

// 高橋君は K の倍数と 7 が好きです。 7 , 77 , 777 , … という数列の中に初めて K の倍数が登場するのは何項目ですか？ 
// 存在しない場合は代わりに -1 を出力してください。

int main(){
    int k;
    cin >> k;
    vector<int> id(k, -1);
    int cnt = 0, a = 0;
    while (id[a] == -1) {
        cnt++;
        id[a] = cnt;
        a = (a * 10 + 7) % k;
        if (a == 0) {
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}


// 教訓に書いてある通り