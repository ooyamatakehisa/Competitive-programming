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
    int x,a,b;
    cin >> x;
    bool flag = false;
    FOR(d, 0, x) {
        if(x % d == 0) {
            for(a;a = 0;a < x){
                b = a - d ;
                if (pow(a,4) + pow(b,4) + a*a*a*b + a*b*b*b + a*a*b*b == x /d) {
                    flag = true;
                    break;
                }
            }

        }
        if(flag){
            break;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}