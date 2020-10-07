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

const int A = 1e6 + 5;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

// N 個の整数があります。 i 番目の数は A i です。 
//「全ての 1 ≤ i < j ≤ N について、 G C D ( A i , A j ) = 1 」が成り立つとき、 { A i } は pairwise coprime であるといいます。 
// { A i } が pairwise coprime ではなく、かつ、 G C D ( A 1 , … , A N ) = 1 であるとき、 { A i } は setwise coprime であるといいます。 
// { A i } が pairwise coprime、setwise coprime、そのどちらでもない、のいずれであるか判定してください。 ただし G C D ( … ) は最大公約数を表します.

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(A, 0);
    FOR (i, 0, n) {
        cin >> a[i];
        c[a[i]]++;
    }
    bool is_pairwise = true;
    FOR (j, 2, A) {
        int cnt = 0;
        for (int k = j; k < A; k += j) {
            cnt += c[k];
        }
        if (cnt > 1) { is_pairwise = false; }
    }
    if (is_pairwise) {
        cout << "pairwise coprime" << endl;
        return 0;
    }

    int g = a[0];
    FOR (i, 1, n) {
        g = gcd(g, a[i]);
        if (g == 1) {
            cout << "setwise coprime" << endl;
            return 0;        
        }
    }
    cout << "not coprime" << endl;
    return 0;
}