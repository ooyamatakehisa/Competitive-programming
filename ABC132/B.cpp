#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include<map>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    int n, pi, count=0;
    vector<int> p;
    cin >> n;
    FOR(i,0,n){
        cin >> pi;
        p.push_back(pi);
    }

    FOR(j,1,n-1){
        if((p[j-1]<p[j]&&p[j]<=p[j+1])||(p[j-1]>=p[j]&&p[j]>p[j+1])){
            count += 1;
        }
    }  

    cout << count << endl; 
}