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
    ll n;
    ll mx=1,mx2=0;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(mx<a[i]){
            mx2=mx;
            mx=a[i];
        }
        else if(mx2<a[i]&&a[i]<=mx){mx2=a[i];}
        }
    for(ll j=0;j<n;j++){
        if(a[j]==mx){cout  << mx2<<endl;}
        else{cout << mx  << endl;}
    }

    return 0;
}