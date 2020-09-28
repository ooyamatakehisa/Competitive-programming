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
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    vector<vector<pair<int,int>>> road(n);
    FOR(i, 0, n) { cin >> h[i]; }

    FOR(i, 0, m) {
        int a, b;
        cin >> a >> b;
        road[a-1].push_back(make_pair(a-1,b-1)); 
        road[b-1].push_back(make_pair(b-1,a-1)); 
    }

    int ans = 0;
    FOR(i, 0, n) {
        bool flag = true;
        FOR(j, 0, road[i].size()) {
            if(h[i] <= h[road[i][j].second]) {
                flag = false;
                break;
            }
        }
        if(flag) { ans++; }
    }
    cout <<  ans << endl;
    return 0;
}