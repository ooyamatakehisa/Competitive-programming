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
    int i = 0;
    while (n > 0) {
        i++;
        n -= pow(26, i);
    }
    n += pow(26, i);
    string ans = "";
    FOR (j, 0, i) ans += 'a';
    int r = 1; i--; n--;
    while (n) {
        r = n % 26;
        ans[i] = 97 + r;
        n = n / 26;
        i--;
    }
    cout << ans << endl;
    return 0;
}