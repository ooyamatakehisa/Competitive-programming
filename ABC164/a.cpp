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
    int s, w;
    cin >> s >> w;
    if(w >= s)cout << "unsafe" << endl;
    else cout << "safe" << endl;
    return 0;
}