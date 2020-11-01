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
    int n;
    cin >> n;
    int a = n % 2;
    if (a == 0) cout << "White" << endl;
    else cout << "Black" << endl;
    return 0;
}