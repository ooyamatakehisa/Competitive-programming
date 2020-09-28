#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
   int N;
   cin >> N;
   int W[N];
   int sum[N];
   FOR(i,0,N){
       cin >> W[i];
   }

   FOR(t,0,N){
       int  suma=0,sumb=0;
       FOR(j, 0 ,t){
           suma += W[j];
       }
       FOR(k, t, N){
           sumb += W[k];
       }
       sum[t] = abs(suma - sumb);
   }
   sort(sum, sum+N);
    cout << sum[0] << endl;
}