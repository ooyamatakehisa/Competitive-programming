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

main(){
    int n, max=0;
    cin >> n;
    int v[21],  c[21];
    FOR(i,0,n){
        int vi;
        cin >> vi ;
        v[i] = vi;
    }
    FOR(j,0,n){
        int ci;
        cin >> ci ;
        c[j] = ci;
    }

    FOR(k,0,n){
        if(v[k] > c[k]){max += v[k]-c[k];}
    }
    if(v > c){max += v-c;}
    cout << max << endl;

}