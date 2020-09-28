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
    int N, M;
    int sum = 0, popSum = 0;
    cin >> N >> M;
    int A[N];
    FOR(i,0,N) {
        cin >> A[i]; 
        sum += A[i];
    }
    FOR(i,0,N) {
        if(A[i]*(4*M) < sum ) continue; 
        popSum++;
    }
    if(popSum>=M) cout << "Yes" << endl; 
    else cout << "No" << endl; 
    return 0;
}