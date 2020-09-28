#include<iostream>
#include <math.h>

using namespace std;

main(){
    int d, n, c;
    cin >> d >> n;
    c = double(d);
    if(n == 0) {
        cout << n <<endl;
    }
    else {
        if(n == 100) cout << int((n + 1)*pow(100, d))+1 << endl;
        else cout << int(n*pow(100, d)) << endl;
    }
}