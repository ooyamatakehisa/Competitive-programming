#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    string S;
    int numwin = 0;
    cin >> S;
    FOR(i, 0, S.length()){
        if(S[i] == 'o'){
            numwin += 1;
        }
    }
    if(7 - (int)(S.length()) + numwin >= 0){cout << "YES" << endl;}
    else{cout << "NO" << endl;}
    }