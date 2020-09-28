#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    int P, Q, R, d;
    int a, b, c;
    cin >> P >> Q >> R;
    a = min(P,Q);
    b = min(Q,R);
    c = min(P,R);
    
    if(a==b){cout << c + b << endl;}
    else if (b==c){cout << a + c << endl;}
    else {cout << b+c <<endl; }
}