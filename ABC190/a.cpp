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

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) cout << "Takahashi" << endl;
    else if (a < b) cout << "Aoki" << endl;
    else if (a == b) {
        if (c == 0) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
    return 0;
}