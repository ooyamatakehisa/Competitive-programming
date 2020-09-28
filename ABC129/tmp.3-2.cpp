#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)


main(){
    int N, M;
    cin >> N >> M;
    vector<int> broken (N+1);
    FOR(i,0,M){
        int a;
        cin >> a;
        broken[a] = 1;
    }
    
    vector<int> dp(N+2);
    const int mod = 1000000007;
    dp[N] = 1;
    for(int i = N-1; i >= 0; i--){
        if(broken[i]){
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i+1] + dp[i+2] % mod);
    }
    cout << dp[0] << endl;
    return 0;
}

