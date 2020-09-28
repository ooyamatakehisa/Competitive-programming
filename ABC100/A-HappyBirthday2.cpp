#include<iostream>

using namespace std;

int maxf(int a, int b){
    return a > b ? a : b ;
}

main(){
    int a,b;
    cin >> a >> b;
    if(maxf(a, b) > 8) cout << ":(" << endl;
    else cout << "Yay!" << endl; 
}