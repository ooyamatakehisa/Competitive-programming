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

// あなたは、N個の正整数A1,A2,⋯,ANからなる数列Aを持っています。あなたは、これから以下の操作をQ回、続けて行います。
// i回目の操作では、値がBiである要素すべてをCiに置き換えます。すべてのi(1≤i≤Q)に対して、i回目の操作が行われた後の数列Aのすべての要素の和、Siを求めてください。

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(1e5 + 7, 0);
    ll sum = 0;
    FOR (i, 0, n) {
        cin >> a[i];
        c[a[i]]++; sum += a[i];
    }
    int q;
    cin >> q;
    FOR (j, 0, q) {
        int bi, ci;
        cin >> bi >> ci;
        int cnt = c[bi];
        c[ci] += c[bi];
        c[bi] = 0;
        int diff = ci - bi;
        sum += diff * cnt;
        cout << sum << endl;
    }

    return 0;
}