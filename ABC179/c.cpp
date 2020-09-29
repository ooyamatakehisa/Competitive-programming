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
    int n;
    int cnt = 0;
    cin >> n;
    FOR (i, 1, n) {
        cnt += (n - 1) / i;
    }
    cout << cnt << endl;
    return 0;
}