#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    long a, b, tall = 0;
    cin >> a >> b;
    FOR(i, 0, b - a - 1){
        tall += i + 1;
    }
    cout << tall - a << endl;
}