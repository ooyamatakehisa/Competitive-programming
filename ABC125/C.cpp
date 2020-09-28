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

ll gcd (ll a, ll b){
    int c = max(a,b);
    int d = min(a,b);
    int r = c % d;
    if(r==0){return d;}
    else{return gcd(d,r);}
}

main(){
    // ll n, pregcd , x=0;
    // vector<ll> gcdmax;

    int n;
    cin >> n;
    vector<ll> A;
    for(int k=0;k<n;k++){
        int ai;
        cin >> ai;
        A.push_back(ai);
    }

    FOR

     
    // TLE
    // for(ll i=0;i<n;i++){
    //     if(i==0){pregcd=A[1];} 
    //     else {pregcd = A[0];}

    //     for(ll j=0;j<n-1;j++){
    //         if(i!=j+1){
    //             pregcd = gcd(pregcd,A[j+1]);
    //         } 
    //         if(pregcd < x){break;}
    //     }
    //     gcdmax.push_back(pregcd);
    //     x = pregcd;
    // }
    // sort(gcdmax.begin(),gcdmax.end());
    // cout << gcdmax[n-1] << endl;
}

