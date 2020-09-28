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
    int N;
    string stringN;
    cin >> stringN;
    // stringN = (string) N;
    if(stringN[0] == '7' || stringN[1] == '7' || stringN[2] == '7'){
        cout << "Yes" << endl;
    }else{
        cout << "No";
    }
    return 0;
}