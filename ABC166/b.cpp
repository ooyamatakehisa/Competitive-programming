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
    int n ,k;
    cin >> n >> k ;
    vector<int> snk(n);

    FOR(i, 0, k) {
        int d,a;
        cin >> d;
        FOR(j, 0, d) {
            cin >> a;
            snk[a-1]++;
        }
    }

    int ans = 0;
     FOR(i, 0, n) {
         if(snk[i]==0)ans++;
     }

    cout << ans << endl;
    return 0;
}