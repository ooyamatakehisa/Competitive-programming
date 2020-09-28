#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
// #include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

// WA
// main(){
//     long long i, A, B, C, D;
//     long long count = 0;
//     long long amariC, amariD;
//     cin >> A >> B >> C >> D;
//     for(i=A;i<B+1;i++){
//         amariC = i % C;
//         amariD = i % D;
//         if((amariC*amariD) != 0){count += 1;}
//     }
//     cout << count << endl;
// }
long long gcd(long long a, long long b){return b ? gcd(b,a%b):a;}
long long lcm(long long a,long long b){return a/gcd(a,b)*b;}

long long f(long long x, int c, int d){
    long long res = x;
    res -= x/c;
    res -= x/d;
    res += x/lcm(c,d);
    return res;
}

main(){
    long long a, b;
    int c, d;
    cin >> a >> b >> c >> d;
    long long ans = f(b,c,d) - f(a-1,c,d);
    cout << ans << endl;
    return 0;
}