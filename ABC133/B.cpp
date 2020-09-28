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

main(){
    int n ,d,count=0;
    double sum;
    double x[11][11];
    cin >> n >> d;
    FOR(i,0,n){ 
        FOR(j,0,d){
            int xj;
            cin >> xj;
            x[i][j] = xj;
        }
    }

    FOR(k,0,n){
        FOR(l,k+1,n){
            sum = 0.0;
            FOR(m,0,d){
                sum += pow(x[l][m]-x[k][m],2);
            }
            double s = sqrt(sum);
            if(s==(double)((int)(s))){
                count += 1;
            }
        }
    }

    cout << count << endl;
}