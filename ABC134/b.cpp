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
    int n,d;
    cin >> n >> d;
    int sho = n/(d*2+1);
    int amari = n%(2*d+1);
    if(n<=d){cout << 1 << endl;}
    else if(amari>=1){cout << sho+1 << endl;}
    else{cout << sho << endl;}
    return 0;
}