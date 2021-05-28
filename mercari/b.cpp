#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'cardPackets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY cardTypes as parameter.
 */

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int cardPackets(vector<int> cardTypes) {
    
    int cnt2 = 0;
    for (auto e : cardTypes) {
        cnt2 += (e % 2);
    }
    int cnt3 = 0;
    for (auto e : cardTypes) {
        cnt3 += (e % 3);
    }
    int cnt5 = 0;
    for (auto e : cardTypes) {
        cnt5 += (e % 5);
    }
    return min(cnt5, min(cnt2, cnt3));
    
}
int main()