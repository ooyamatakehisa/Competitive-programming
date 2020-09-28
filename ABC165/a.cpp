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
    int k,a , b;
    cin >> k >> a >> b ;
    string ans  = "NG";
    FOR(i, a, b+1) {
        if(i % k == 0) {
            ans = "OK";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}