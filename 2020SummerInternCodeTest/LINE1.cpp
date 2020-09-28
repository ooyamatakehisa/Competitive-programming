#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = (a), i##formax = (b); i < i##formax; i++)
typedef long long ll;

vector<int> returnMaxSucceedX(vector<vector<char>> square, int n) {
    vector<int> ans(5, 0);
    
    FOR (i, 0, n) {
        bool cornerFlag = (square[i][0] == 'x') ? true : false;
        int tmp = 0;
        int ansJ = 0;
        int ansI = 0;
        FOR (j, 1, n) {
            if (cornerFlag && square[i][j] == 'x') { continue; }
            else {
                cornerFlag = false;
                if (square[i][j] == 'x') {
                    ansI = (tmp == 0) ? i : ansI;
                    ansJ = (tmp == 0) ? j : ansJ;
                    tmp++;
                } else { 
                    ans[0] = max(ans[0], tmp);
                    if (ans[0] == tmp) {
                        ans[1] = ansI;
                        ans[2] = ansJ - 1;
                        ans[3] = ansI;
                        ans[4] = ansJ + ans[0];
                    }
                    tmp = 0; 
                    ansJ = 0;
                    ansI = 0;
                }
            }
        }
    }
    FOR (j, 0, n) {
        bool cornerFlag = (square[0][j] == 'x') ? true : false;
        int tmp = 0;
        int ansJ = 0;
        int ansI = 0;
        FOR (i, 1, n) {
            if (cornerFlag && square[i][j] == 'x') { continue; }
            else {
                cornerFlag = false;
                if (square[i][j] == 'x') {
                    ansI = (tmp == 0) ? i : ansI;
                    ansJ = (tmp == 0) ? j : ansJ;
                    tmp++;
                } else { 
                    ans[0] = max(ans[0], tmp);
                    if (ans[0] == tmp) {
                        ans[1] = ansI - 1;
                        ans[2] = ansJ;
                        ans[3] = ansI + ans[0];
                        ans[4] = ansJ;
                    }
                    tmp = 0; 
                    ansJ = 0;
                    ansI = 0;
                }
            }
        }
    }
    
    return ans;
}

int main() {
    int n;
    vector<int> ans(4);
    ans[0] = 1;

    cin >> n;
    vector<vector<char>> square(n, vector<char>(n));

    FOR(i, 0, n) {
        string a;
        cin >> a;
        FOR(j, 0, n) {
            square[i][j] = a[j];
        }
    }

    int cnt = 0;
    vector<int> pos(0);
    while(ans[0] != 0) {
        ans = returnMaxSucceedX(square, n);
        if(ans[0] == 0) break;
        if(square[ans[1]][ans[2]] != 'o'){
            square[ans[1]][ans[2]] = 'o';
            cnt++;
            pos.push_back(ans[1]);
            pos.push_back(ans[2]);
        }
        if(square[ans[3]][ans[4]] != 'o'){
            square[ans[3]][ans[4]] = 'o';
            cnt++;
            pos.push_back(ans[3]);
            pos.push_back(ans[4]);
        }
        
        if(ans[1] == ans[3]) {
            FOR(j, ans[2] + 1, ans[4]) {
                square[ans[1]][j] = '.';
            }
        } else {
            FOR(i, ans[1] + 1, ans[3]) {
                square[i][ans[2]] = '.';
            }
        }

    }
    cout << cnt << endl;
    FOR(i, 1, cnt + 1) {
        cout << pos[2*i - 2] << " " << pos[2*i-1] << endl;
    }

    return 0;
}