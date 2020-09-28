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
    int n, m;
    cin >> n >> m;
    int a[m];
    ll dayForPaper=0;
    FOR(i,0,m){
        cin >> a[i];
        dayForPaper += a[i];
    }
    if(n >= dayForPaper)cout << n-dayForPaper << endl;
    else cout << -1 << endl;

    return 0;
}