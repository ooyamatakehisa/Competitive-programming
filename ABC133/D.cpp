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
    int n,h=0;
    cin >> n;
    ll a[100000];
    ll b[100000]
    ;
    FOR(i,0,n){
        ll ci;
        cin >> ci;
        a[i] = ci;

    }
    ll mx = max(a[0],a[n-1]);

    b[0]=0;
    FOR(k,0,n){
        b[k+1]=(a[k]-b[k]/2)*2;
    }
    ll bet = b[0]+b[n-1];

    for(ll j=0;j<mx;j+=1){
        if(bet ==2*a[n-1]){
            h=j;
            break;
        }
        bet +=4;
                
    }
    FOR(m,0,n){
        if(m%2==0){cout << b[m]+2*h << ' ' ;}
        else{cout << b[m]-2*h<< ' ';}
    }
    cout << endl;
}