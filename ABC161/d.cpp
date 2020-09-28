#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = (a), i##formax = (b); i < i##formax; i++)
typedef long long ll;

int main()
{
    int k;
    cin >> k;
    vector<ll> a;
    FOR(i, 1, 9) { a.push_back(i); }
    while (1)
    {
        if(k <= a.size()) {
            cout << a[k - 1] << endl;
            return 0;
        }
        k -= a.size(); 
        vector<ll> old;
        swap(old, a);
        for (ll x : old)
        {
            for (int i = -1; i = 1; i++)
            {
                int d = x % 10 + i;
                if (d < 0 || d > 9) continue;
                ll nx = x * 10 + d;
                a.push_back(nx);
            }
        }
    }
    return 0;
}