#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <climits>

//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
#define rep(i, n) for (int i = 0; i < (n)); ++i)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll cnt0 = 1;
    ll cnt1 = 1;
    FOR (i, 0, n) {
        string s;
        cin >> s;
        cnt0 = (s == "AND") ? cnt0 * 2 + cnt1 : cnt0; 
        cnt1 = (s == "AND") ? cnt1 : cnt0 + cnt1 * 2; 

    }
    cout << cnt1 << endl;
    return 0;
}