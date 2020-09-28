#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <unordered_map>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> posa(n*n);
    vector<pair<int, int>> posb(n*n);

    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(n));

    FOR(i, 0, n) {
        FOR(j, 0, n) {
            int av;
            cin >> av;
            a[i][j] = av;
            posa[a[i][j]] = make_pair(i, j);
        }
    }
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            int bv;
            cin >> bv;
            b[i][j] = bv;
            posb[b[i][j]] = make_pair(i, j);
        }
    }

    int i = 0;
    int j = 0; 
    ll cnt = 0;
    string ans = "";

    ll cnt2 = 0; 
    bool flag = true;
    while (true) {
        if(j==n || n >= 4)break;
        else if(cnt>=5 * 10e5){
            flag = false;
            break;
        } 
        if(a[i][j]==b[i][j]) {
           if(i == n-1) {
               i = 0;
               j++;
           }else { i++; }
           continue;
        }

        pair<int, int> anspos = posb[a[i][j]];
        if (i != anspos.first) {
            int diff = (i >= anspos.first) ? min(i - anspos.first, n + anspos.first - i) : min(anspos.first - i, n - anspos.first + i);
            cnt2 += diff;
            int direction = (n >= 2 * (anspos.first)) ? 2 : 1;
            int x = 0;
            FOR(k, 0, diff) {
                if(direction == 2 ) {
                    int tmp = a[n-1][j];
                    for(int k = n-1;  k > 0; k--) {
                        a[k][j] = a[k-1][j];
                    }
                    a[0][j] = tmp;
                }
                else {
                    int tmp = a[0][j];
                    for(int k = 0; k < n-1; k++) {
                        a[k][j] = a[k+1][j];
                    }
                    a[n-1][j] = tmp;
                }
                ans = ans +  "2 " + to_string(j+1) + " " + to_string(direction) + "\n";
            } 
        }
        if (j != anspos.second) {
            int diff = (j >= anspos.second) ? min(j - anspos.second, n + anspos.second - j) : min(anspos.second - j, n - anspos.second + j);
            cnt2 += diff;

            int direction = (n >= 2 * (anspos.second)) ? 2 : 1;
            int x = 0;
            FOR(k, 0, diff) {
                if(direction == 2 ) {
                    int tmp = a[i][n-1];
                    for(int k = n-1;  k > 0; k--) {
                        a[i][k] = a[i][k-1];
                    }
                    a[i][0] = tmp;
                }
                else {
                    int tmp = a[i][0];
                    for(int k = 0; k < n-1; k++) {
                        a[i][k] = a[i][k+1];
                    }
                    a[i][n-1] = tmp;
                }
                ans = ans +  "1 " + to_string(i+1) + " " + to_string(direction) + "\n";

            } 
        }
    }

    if(flag && n <= 3) {
        cout << "yes" << endl;
        cout << cnt2 << endl;
        cout << ans << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}