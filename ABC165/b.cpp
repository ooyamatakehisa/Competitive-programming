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
    ll x;
    cin >> x;
    ll deposit = 100;
    ll year = 0;
    while(true) {
        deposit += deposit / 100 ;
        year++;
        if(deposit >= x) break; 
    }
    cout << year << endl;
    return 0;
}