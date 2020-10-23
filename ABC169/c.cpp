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
    ll a;
    double b;
    cin >> a >> b;
    ll bi = 100 * b + 0.5;
    a *= bi;
    a /= 100;
    cout << a << endl;
    return 0;
}

// https://qiita.com/KawabataLemon/items/36bacf973a3386fac078
// https://qiita.com/mod_poppo/items/910b5fb9303baf864bf7
// https://ja.wikipedia.org/wiki/%E5%80%8D%E7%B2%BE%E5%BA%A6%E6%B5%AE%E5%8B%95%E5%B0%8F%E6%95%B0%E7%82%B9%E6%95%B0