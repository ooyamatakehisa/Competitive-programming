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
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    int mod = 7 + (int) 1e9 ;
    FOR(i,k,n+2){
        ans += ((n - i + 1) * i + 1) % mod;
        ans = ans % mod;
    }

    cout << ans << endl;
    return 0;
}