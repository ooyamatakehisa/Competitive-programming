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
    char s, t;
    cin >> s;
    cin >> t;
    if (s == 'Y') t = toupper(t);
    cout << t << endl;
    return 0;
}