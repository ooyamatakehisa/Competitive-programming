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

int gcd(int x, int y) {
    if(x<y) swap(x,y);
    if (y == 0) return x;
    return gcd(y, x%y);
}

int main(){
    int K;
    ll ans = 0;
    cin >> K;
    FOR(a,1,K+1){
        FOR(b,1,K+1){
            FOR(c,1,K+1){
                ans += gcd(a,gcd(b,c));
            }
        }
    }
    cout << ans << endl;
    return 0;
}

