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
    int n;
    int count=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(to_string(i).length() % 2 == 1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}