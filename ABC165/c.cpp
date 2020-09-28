#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <set>
#include <tuple>
//#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = (a), i##formax = (b); i < i##formax; i++)
typedef long long ll;

int n, m, q;
vector<int> a, b, c, d;
int ans;

// 深さ優先探索dfsで全探索する!
void dfs(vector<int> A) {
    if (A.size() == n+1) {
        int now = 0;
        FOR(i, 0, q) {
            if(A[a[i]] - A[b[i]] == c[i]) now += d[i];
        }
        ans = max(now, ans);
        return;
    }

    A.push_back(A.back());
    while(A.back() <= m) {
        dfs(A);
        A.back()++;
    }
}

int main()
{
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    FOR(i, 0, q) {
        int a, b, c, d;
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(0));

    // set<int> used;
    // ll ans=0;
    // vector<tuple<int, int, int, int, int>> vc;
    // FOR(i, 0, q)
    // {
    //     int a, b, c, d;
    //     cin >> a >> b >> c >> d;
    //     vc.emplace_back(d, a, b, c, i);
    // }
    // sort(vc.rbegin(), vc.rend());

    // FOR(i, 0, q)
    // {
    //     if (used.find(get<1>(vc[i])) == used.end() || used.find(get<2>(vc[i])) == used.end())
    //     {
    //         ans += get<0>(vc[i]);
    //         used.insert(get<1>(vc[i]));
    //         used.insert(get<2>(vc[i]));
    //     }
    // }
    // cout << ans << endl;
    // return 0;
}