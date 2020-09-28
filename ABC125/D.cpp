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
    int n;
    cin >> n;
    ll a[1000000];
    ll sum = 0;
    FOR(i,0,n){
        cin >> a[i] ; 
    }

    FOR(j,0,n-1){
        if(a[j]<=0 && a[j+1]<0){
            a[j] *= (-1);
            a[j+1] *= (-1);
        }

        else if(a[j]<=0 && a[j+1]>=0){
            if(a[j]+a[j+1]<0){
                a[j] *= (-1);
                a[j+1] *= (-1);
            }
        }
    }

    FOR(l,0,n){
        sum += a[l];
    }
    
    cout << sum << endl;
}