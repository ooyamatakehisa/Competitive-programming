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
    int n, m;
    bool flag;
    int ans = 0;
    cin >> n >> m;
    vector<ll> a(n);
    FOR(i, 0, n){ cin >> a[i]; }
    int max = *max_element( a.begin(), a.end() );
    for(ll j = max * 0.5; j < m; j += max ) {
        flag = true;
        for(ll x : a ){
            if( (j * 10) % x != 0 || (j * 10 / x) % 10 != 5) {
                flag = false;
                break;
            }
        }
        if(flag) { ans++ ;}
    }
    cout << ans << endl;
    return 0;
}