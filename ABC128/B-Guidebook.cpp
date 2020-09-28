

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
   vector<tuple<string, int int>> a;
   FOR(i, 1, N + 1){
       string s;
       int city;
       int point;
       cin >> city >> point;
       point = -point;
       a.push_back(tie(city, point, i)); //このtieでタプルの作成ができる 
   }
   sort(a.begin(), a.end);
   FOR(i, 0, N-1){
       cout << get<2>(a[i]) << endl;
   }   
}
