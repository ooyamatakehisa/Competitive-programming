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
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    ll ans = 0;
    if(a > k) ans = k;
    else {
        ans = a;
        if (a + b  <= k ) ans -= (k - a - b);
    }
    // else if ( a + b  <= k && a + b + c > k) ans -= c -a -b;
    cout << ans << endl;
    
    
    return 0;
}