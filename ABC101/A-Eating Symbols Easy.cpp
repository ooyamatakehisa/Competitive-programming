#include<iostream>
#include<math.h>
#include<algorithm>
#include<queue>
#include<string>
#include<bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    string S;
    int out = 0;
    cin >> S;
    FOR(i, 0, 4){
        if(S[i] == '+')out += 1;
        else out -= 1;   
    }
    cout << out << endl;
}