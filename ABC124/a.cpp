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
    int a, b, mx, mn;
    cin >> a >> b;
    mx = max(a,b);
    mn = min(a,b);
    cout << mx+max(mx-1,mn) << endl;
    return 0;
}