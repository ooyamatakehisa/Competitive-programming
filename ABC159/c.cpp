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
    double l;
    cin >> l;
    double line = l / 3;
    double ans = line * line * line;
    printf("%.10f\n", ans);
    return 0;
}