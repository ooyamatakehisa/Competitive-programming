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

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    FOR (i, 0, h) cin >> s[i];
    int ans = 0;
    FOR (i, 0, h) FOR (j, 0, w - 1) {
        if (s[i][j] == '.' && s[i][j + 1] == '.') ans++;
    }
    FOR (j, 0, w) FOR (i, 0, h - 1) {
        if (s[i][j] == '.' && s[i + 1][j] == '.') ans++;
    }
    cout << ans << endl;
    return 0;
}