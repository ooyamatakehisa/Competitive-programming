#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    long long N;
    int sum = 0;
    double po;
    cin >> N;
    FOR(i, 0, to_string(N).length()){
        po = pow(10, i);
        sum += N / (int)po % 10;
    }
    if(N % sum){ cout << "No" << endl;}
    else {cout << "Yes" << endl;}
}