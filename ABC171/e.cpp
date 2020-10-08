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
    vector<int> a(n);
    FOR (i, 0, n) cin >> a[i];
    int sum = 0;
    FOR (i, 0, n) sum ^= a[i];
    FOR (i, 0, n) a[i] ^= sum;
    FOR (i, 0, n) cout << a[i] << endl;

    return 0;
}