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
    int n,c;
    cin >> n;
    vector<int> a(n),b(n);
    FOR(i,0,n){
        cin >> c;
        a[i] = c;
        b[i] = a[i];
    }
    FOR(j,0,n){
        b[j] += 2;
    }
    
    return 0;
}