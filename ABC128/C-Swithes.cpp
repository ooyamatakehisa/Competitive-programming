#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)


main(){
    int N, M;
    vector<int> a[N];
    cin >> N >> M;
    FOR(i, 0, M ){
      int k;
      cin >> k;
      FOR(j, 0, k-1){
        int s; 
        cin << s;
        s--;
        a[s] |= 1 << i;
      }

    }
    FOR(s, 0, 1 << N){
      int t = 0;
      FOR(i, 0, N){
        if(s >> i & 1){
          
        }
      }
    }
}