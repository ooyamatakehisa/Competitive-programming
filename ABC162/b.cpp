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
    int N;
    cin >> N;
    ll ans = 0;
    FOR(i, 1, N + 1){
        if(i % 3 != 0 && i % 5 != 0){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}