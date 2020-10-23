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

const int MX = 1e6;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> cnt(MX, 0);
    int min = 0;
    FOR (i, 0, n) {
        cin >> p[i];
        cnt[p[i]]++;
        while (cnt[min] >= 1) {
            min++;
        }
        cout << min << endl;
    }
    return 0;
}