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
    int a,b;
    ll x;
    cin >> a >> b >> x;
    int i = 0;
    while(a*i+b*(to_string(i).length()) <= x){
        i++;
    }
    cout << i-1 << endl;
    return 0;
}