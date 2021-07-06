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
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

struct C {
    int x, y;
    C(int x=0, int y=0) : x(x), y(y) {}
    C operator*(const C& a) const {
        return C(x*a.x-y*a.y, x*a.y+y*a.x);
    }
    C operator-(const C& a) const {
        return C(x-a.x, y-a.y);
    }
    bool operator<(const C& a) const {
        if (x == a.x) return y < a.y;
        return x < a.x;
    };
    bool operator==(const C& a) const {
        return x == a.x && y == a.y;
    };
    int norm() const { return x*x + y*y;}
};

int main(){
    int n;
    cin >> n;
    vector<C> a(n), b(n);
    rep (i, n) {
        int x, y;
        cin >> x >> y;
        a[i] = C(x, y);
    }
    rep (i, n) {
        int x, y;
        cin >> x >> y;
        b[i] = C(x, y);
    }

    if (n == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    rep(i,n)rep(j,n) {
        if (i == j) continue;
        if ((a[1]-a[0]).norm() != (b[j]-b[i]).norm()) continue;
    
        auto f = [&](vector<C> p, C o, C r) {
            rep(i,n) p[i] = p[i]-o;
            rep(i,n) p[i] = p[i]*r;
            sort(p.begin(), p.end());
            return p;
        };
        
        vector<C> na = f(a, a[0], b[j]-b[i]);
        vector<C> nb = f(b, b[i], a[1]-a[0]);
        if (na == nb) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}