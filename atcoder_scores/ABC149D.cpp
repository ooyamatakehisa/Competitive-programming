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
    int n, k;
    int r, s, p;
    map<char, int> dic{{'r', 2}, {'s', 0}, {'p', 1}};
    vector<int> cnt(3);
    string t;
    bool flag = true;
    cin >> n >> k >> r >> s >> p >> t;
    FOR(i, 0, n)
    {
        if (i >= k)
        {
            if (t[i - k] == t[i])
            {
                t[i] = 'a';
            }
            else { cnt[dic[t[i]]]++; }
        }
        else { cnt[dic[t[i]]]++; }
    }
    ll score = cnt[0] * r + cnt[1] * s + cnt[2] * p;
    cout << score << endl;
    return 0;
}