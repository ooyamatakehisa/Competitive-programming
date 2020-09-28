#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
// #include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    int N, L, dif;
    int taste = 0;
    vector<int> a;
    cin >> N >> L;

    FOR(i,0,N){
        taste += L+i;
        dif = abs(L+i);
        a.push_back(dif);
    }

    sort(a.begin(),a.end());
    if(taste >= 0){taste -= a[0];}
    else{taste += a[0];}
    cout << taste << endl;  

}