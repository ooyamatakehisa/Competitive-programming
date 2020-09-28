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
    ll N, K;
    cin >> N >> K;
    ll mod = N % K;
    if(mod > K - mod){
        mod = K - mod;
    }
    cout << mod << endl;
    return 0;
}