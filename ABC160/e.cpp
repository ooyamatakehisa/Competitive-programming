#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <set>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int main(){
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    priority_queue<ll> ps, qs, rs;
    FOR (i, 0, a) {
        ll p;
        cin >> p;
        ps.emplace(p);
    }
    FOR (i, 0, b) {
        ll q;
        cin >> q;
        qs.emplace(q);
    }
    FOR (i, 0, c) {
        ll r;
        cin >> r;
        rs.emplace(r);
    }
    
    int cnt_p = x;
    int cnt_q = y;
    ll sum = 0;
    FOR (i, 0, x + y) {
        ll mx = 0;
        if (cnt_p && cnt_q && !rs.empty()) {
            initializer_list<ll> tmp = {ps.top(), qs.top(), rs.top()};
            mx = max(tmp);
        } else if (cnt_p && cnt_q && rs.empty()) {
            initializer_list<ll> tmp = {ps.top(), qs.top()};
            mx = max(tmp);
        } else if (!cnt_p && cnt_q && !rs.empty()) {
            mx = max(qs.top(), rs.top());
        } else if (!cnt_p && cnt_q && rs.empty()) {
            mx = qs.top();
        } else if (cnt_p && !cnt_q && !rs.empty()) {
            mx = max(ps.top(), rs.top());
        } else if (cnt_p && !cnt_q && rs.empty()) {
            mx = qs.top();
        } else {
            mx = rs.top();
        }
        if (mx == ps.top() && cnt_p > 0) {
            sum += ps.top();
            --cnt_p;
            ps.pop();
        }
        else if (mx == qs.top() && cnt_q > 0) {
            sum += qs.top();
            --cnt_q;
            qs.pop();
        }
        else if (mx == rs.top()) {
            sum += rs.top();
            rs.pop();
        }
    } 
    cout << sum << endl;
    return 0;
}