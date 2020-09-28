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
    string s,t;
    cin >> s >> t;
    if (s + t[t.size()-1] == t)cout << "Yes" <<  endl;
    else cout << "No" << endl;

    return 0;
}