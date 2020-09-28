#include<iostream>
#include <math.h>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
   double K;
   double N, P = 0;
   double Pi;
   int score;
   cin >> N >> K;
    if(K <= N){
        FOR(i, 0, K - 1){
            Pi = 1.0 ;
            score = i + 1;
            while(1 <= score && score <= K - 1){
                score *= 2;
                Pi /= 2.0; 
            
            }
            P += Pi;
        }
        P += N - K + 1.0;
    }
    else{
        FOR(i, 0, N ){
            Pi = 1.0 ;
            score = i + 1;
            while(1 <= score && score <= K - 1){
                score *= 2;
                Pi /= 2.0; 
            }
            P += Pi;
        }
    }
    printf("%.15f",P / N);
}