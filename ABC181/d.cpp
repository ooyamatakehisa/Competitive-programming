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

bool solve(string s) {
    if(s.size() == 1) return s == "8";
    if(s.size() == 2){
        if(stoi(s) % 8 == 0) return 1;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }
    vector<int> cnt(10);
    FOR (i, 0, s.size()) {
        int si = s[i] - '0';
        cnt[si]++;
    }
    int lenofs = s.size();
    FOR (i, 13, 125) {
        vector<int> tmp = cnt;
        int a = 8 * i;
        string b = to_string(a);
        
        for (auto bi : b) {
            int bj = bi - '0';
            tmp[bj]--;
        }
        int cnt_less_than0 = 0;
        for (auto x : tmp) {
            if (x < 0) cnt_less_than0++;
        }
        if (cnt_less_than0 > 0)continue;
        else {
            return true;
        }
    }
    return false;
}



int main(){
    string s;
    cin >> s;
    string ans = solve(s) ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}