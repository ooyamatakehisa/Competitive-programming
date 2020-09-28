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






// 以下dfsによる解答、考え方はあっているがtleになる、いい練習になった

int n, m, x;
vector<vector<int>> ca(12, vector<int>(13));
vector<vector<int>> copy;
vector<vector<int>> copyLog;

int ans = 10e5;

void dfs(vector<int> log, vector<int> sum)
{
    bool ok = true;
    FOR(i, 1, m+1) {
        if(sum[i] < x) ok = false;
    }
    if (ok || log.size() > 12) {
        ans = min(ans, sum[0]);
        return;
    }

    vector<int> copy = sum;
    log.push_back(13);
    FOR(i, 0, n)
    {
        copy = sum;
        bool isUsed = false;
        for(int a : log) { 
            if(i == a){
               isUsed = true; 
               break; 
            }
        }

        if (!isUsed) {
            log.back() = i;
            
            FOR(j, 0, m + 1) {
                copy[j] += ca[i][j];
            }
            dfs(log, copy);
        }
    }
}

int main()
{
    cin >> n >> m >> x;
    FOR(i, 0, n) {
        FOR(j, 0, m + 1) { cin >> ca[i][j]; }
    }

    // vector<int> x(1);5
    dfs(vector<int>(0), vector<int>(m + 1, 0));
    if(ans != 10e5){ cout << ans << endl; }
    else cout << -1 << endl;

    return 0;
}