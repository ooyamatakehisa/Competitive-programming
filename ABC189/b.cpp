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

int solve() {
    int n, x;
    cin >> n >> x;
    x *=  100;
    double sum = 0;
    FOR (i, 0, n) {
        int v, p;
        cin >> v >> p;
        sum += v * p;
        if (sum > (double) x) return i+1;
    }
    return -1;
}

int main(){
    cout << solve() << endl;
}   