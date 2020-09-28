#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include<map>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

main(){
    ll n,i,di;
    vector<ll> d;
    ll knum;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> di;
        d.push_back(di);
    }
    sort(d.begin(),d.end());
    if(d[n/2-1]==d[n/2]){cout << 0 << endl;}
    else{
        knum = d[n/2] - d[n/2-1] ;;
        cout << knum << endl; 
        }
}