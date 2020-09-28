#include<iostream>
#include <math.h>

using namespace std;


main(){
    int r, D;
    int x[11];
    int i;
    cin >> r >> D >> x[0];
    for(i = 0; i < 10; i++){
        x[i+1] = r*x[i] - D;
        cout << x[i+1] << "\n";
    }
    cout << flush;
}