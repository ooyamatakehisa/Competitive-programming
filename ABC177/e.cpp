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

const int A = 1e6 + 5;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(A, 0);
    FOR (i, 0, n) {
        cin >> a[i];
        c[a[i]]++;
    }
    bool is_pairwise = true;
    FOR (j, 2, A) {
        int cnt = 0;
        for (int k = j; k < A; k += j) {
            cnt += c[k];
        }
        if (cnt > 1) { is_pairwise = false; }
    }
    if (is_pairwise) {
        cout << "pairwise coprime" << endl;
        return 0;
    }

    int g = a[0];
    FOR (i, 1, n) {
        g = gcd(g, a[i]);
        if (g == 1) {
            cout << "setwise coprime" << endl;
            return 0;        
        }
    }
    cout << "not coprime" << endl;
    return 0;
}