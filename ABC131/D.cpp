#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include<map>
// #include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

typedef long long ll;

main(){
    int N;
    bool bol = true;
    ll now = 0;
    ll Ai, Bi;
    vector<ll> a;
    vector<pair<ll,ll>> b;

    cin >> N;
    FOR(i,0,N){
        cin >> Ai >> Bi;
        a.push_back(Ai);
        b.push_back(make_pair(Bi,i));
    }
    sort(b.begin(),b.end());

    FOR(j,0,N){ 
        now += a[b[j].second];
        if(now > b[j].first){
            bol = false;
            break;
        }
    }

    bol ? cout << "Yes" << endl : cout << "No"  << endl; 
}
