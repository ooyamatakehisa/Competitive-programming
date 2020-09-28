#include<iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    int N, M, sum;
    int maxL = 0, minR = 100000;
    int L, R;
    int i, j;
    cin >> N >> M;
    FOR(i, 0, M){
        cin >> L >> R;
        if(minR >= R){ minR = R; }
        if(maxL <= L){ maxL = L; }
    }

    sum = minR - maxL + 1;
    
    cout << max(0, sum) << endl;
}