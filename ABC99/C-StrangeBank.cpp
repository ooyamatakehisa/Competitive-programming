#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    double N;
    int sum = 0; 
    cin >> N;
    while(N >= 36){
        int i = 1, j = 1;
        while(N - pow(6, i) > 0){
            i++;
        }
        i--;

        while(N - pow(9, j) > 0){
          j++;
        }    
        j--;

        if(pow(6, i) >= pow(9, j)){
            N -= pow(6, i); 
        } 
        else {
            N -= pow(9, j);
        }
        sum++; 
    }

    while(N >= 18 && N < 36){
        sum++;
        N -= 9;
    }

    cout << sum + N << endl;

}