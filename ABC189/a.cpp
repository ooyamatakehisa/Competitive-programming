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
    string c;
    cin >> c;
    string ans = "Lost";
    if (c[0] == c[1] && c[1] == c[2])  ans = "Won";
    cout << ans << endl;
    return 0;
}