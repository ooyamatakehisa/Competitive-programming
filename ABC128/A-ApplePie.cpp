#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    int A, P;
    int piece, pie;
    cin >> A >> P;
    piece = P + 3 * A;
    pie = piece / 2;
    cout << pie << endl;
}
