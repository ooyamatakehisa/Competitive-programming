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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> floor(n, vector<char>(m, 'x'));
    FOR(i, 0, n) {
        string a;
        cin >> a;
        FOR(j, 0, m) {
            floor[i][j] = a[j];
        }
    }

    int cnt = 1;
    int i = 0;
    int j = 0;
    bool flag = false;
    while(true) {
        switch (floor[i][j]) {
            case 'N':
                if (i - 1 < 0) { flag = true; } 
                else {
                    floor[i][j] = 'x';
                    i--;
                    cnt++;
                }
                break;
            case 'S':
                if (i + 1 >= n) { flag = true; } 
                else {
                    floor[i][j] = 'x';
                    i++;
                    cnt++;
                }
                break;
            case 'W':
                if (j - 1 < 0) { flag = true; } 
                else {
                    floor[i][j] = 'x';
                    j--;
                    cnt++;
                }
                break;
            case 'E':
                if (j + 1 >= m) { flag = true; } 
                else {
                    floor[i][j] = 'x';
                    j++;
                    cnt++;
                }
                break;
            case 'x' : 
                flag = true;
                cnt--;
                break;
        }
        if (flag) break;
    }
    cout << cnt  << endl;
    return 0;
}