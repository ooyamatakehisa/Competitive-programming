#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
// #include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
   string s;
   int b = 0;
    cin >> s;
    FOR(i,0,4){
        if(s[i]==s[i+1]){
            b = 1;
            break;
        }
    }

    if(b){cout << "Bad" << endl;; }
    else{cout << "Good" << endl;}
}