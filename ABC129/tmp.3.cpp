#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

long long fib(long long n){
    if (n == 0 || n == 1){return 1;}
    else{return fib(n-1) + fib(n-2);}
}

main(){
   int N, M;
   long long c = 0; 
   int pre = 1;
   cin >> N >> M;
    int a, b;
    if(M != 0){
        FOR(i,0,M){
            cin >> a;
            if (a == pre && pre != 1){
                c = 0;
                break;
            }
            else{
                b = a - pre;
                c += fib(b);
                c %= 1000000007;
                pre = a + 1;
            }
        }
        if (c == 0){cout << 0 << endl;}
        else{
        b = N - pre;
        c += fib(b);
        cout << c % 1000000007 <<endl;
        }
    }
    else{
        c = fib(N);
        cout << c % 1000000007 << endl;
    }
}


