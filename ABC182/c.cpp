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
    ll n;
    cin >> n;
    int len = to_string(n).length();
    int min1 = 20;
    FOR (i, 1, 1<<len) {
        ll sum = 0;
        int cnt = 0;
        FOR (j, 0, len) {
            if(i>>j&1) {
                ll digit = (n / pow(10, j));
                int x = digit % 10;
                sum += x;
            } else {
                cnt++;
            }
        }
        if (sum % 3 == 0) min1 = min(min1, cnt);
    }
    if (min1 == 20) cout << -1 << endl;
    else cout << min1 << endl;
    return 0;
}