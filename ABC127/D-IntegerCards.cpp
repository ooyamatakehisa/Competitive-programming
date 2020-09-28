#include<iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)


int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

main(){
    int k = 0;
    int N, M, B, C ;
    long sum = 0;
    int a[100001];
    cin >> N >> M;
    FOR(i, 0, N){
       cin >> a[i] ; 
    }

    FOR(j, 0 , M){
        sort(a, a + N);
        k = 0;
        cin >> B >> C;
        while((a[k] < C)&&(k < B)){
            a[k] = C;
            k += 1;
        }
    
    }

    FOR(m, 0, N){
        sum += a[m];
    }

    cout << sum << endl;
}