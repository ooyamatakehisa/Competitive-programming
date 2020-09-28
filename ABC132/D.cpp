#include<iostream>
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
    int n, k;
    ll comb1[3000],comb2[3000];
    ll a,b;
    ll i, mod = 1000000007;
    cin >> n >> k;
    // if (k==n){cout << 1 << endl;}
    // else{
        comb1[0] = n-k+1;
        comb2[0] = 1;
        a=comb1[0];
        b=comb2[0];
        cout << comb1[0]*comb2[0]  << endl;
        for(i=2;i<=k;i++){
            comb1[i-1] = (n-k+2-i)*comb1[i-2]/i;
            comb2[i-1] = (k+1-i)*comb2[i-2]/(i-1);
            a=comb1[i-1];
            b=comb2[i-1];
            cout << ((comb1[i-1]%mod)*(comb2[i-1]%mod))%mod << endl;
        } 
    // }
}