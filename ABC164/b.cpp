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
    int a, b, c, d;
    string ans = "";
    cin >> a >> b >> c >> d;
    while (true) {
        c -= b;
        if(c <= 0) {
            ans = "Yes";
            break;
        }
        a -= d;
        if(a <= 0) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}