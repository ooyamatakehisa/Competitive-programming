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
    int a, b, t, num;
    cin >> a >> b >> t;
    num = t / a;
    cout << num * b << endl;
}