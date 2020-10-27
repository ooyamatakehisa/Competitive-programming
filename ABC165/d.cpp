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
    int a;
    ll b, n;
    cin >> a >> b >> n;
    ll x = n;
    if (n >= b - 1) x = b - 1;
    ll ans = a * (x % b) / b;
    cout << ans << endl;
    return 0;
}