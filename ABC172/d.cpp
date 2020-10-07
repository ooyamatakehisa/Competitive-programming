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

// 正整数Xに対し、Xの正の約数の個数をf(X)とします。正整数Nが与えられるので、∑[K=1...N]K×f(K)を求めてください。


int main(){
    int n; ll ans = 0;
    cin >> n;
    vector<int> d(n + 1);
    FOR (i, 1, n + 1) for (int j = i; j <= n; j += i) d[j]++;
    FOR (i, 1, n + 1) ans += i * d[i];
    cout << ans << endl;
    return 0;
}