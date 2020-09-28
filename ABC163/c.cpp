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
    int a;
    int vote[n];
    FOR(i,0,n){
        vote[i]=0;
    }
    FOR(i,0,n-1){
        cin >> a;
        vote[a-1]++;
    }
    FOR(i,0,n){
        cout << vote[i] << endl;
    }

    // for(int x: vote){
    //     cout << x << endl;
    // }ともかける
    return 0;
}