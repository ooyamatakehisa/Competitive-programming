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

const int m = 2019;

int main(){
    string s;
    cin >> s;
    // string searchStr = "";
    // ll ssize = s.size();
    // ll ans = 0;
    // for(int i = 1; i <= 10000; i++) {　
    //     searchStr = to_string(i * 2019);
    //     if(searchStr.size() > ssize) break;
    //     if(searchStr.find("0") != string::npos) continue;

    //     int pos = 0;
    //     while (pos != string::npos) {
            
    //         pos = s.find(searchStr, pos );
    //         if(pos != string::npos)pos++;
    //         ans++;
    //     }
    //     ans--;
    // }
    // cout << ans << endl;

    int n = s.size();
    reverse(s.begin(), s.end());
    int x = 1, tot = 0;
    vector<int> cnt(m);
    ll ans = 0;
    FOR(i, 0, n) {
        cnt[tot]++;
        tot += (s[i] - '0') * x;
        tot %= m;
        ans += cnt[tot];
        x = x * 10 % m;
    }
    cout << ans << endl;
    return 0;
}