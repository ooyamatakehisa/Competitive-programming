#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <set>
#include <sstream>
using namespace std;


#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int n, m;

bool forward(vector<vector<int>> p, vector<int> bs) {
    FOR (i, 1, n + 1) {
        int next = i;
        FOR (j, 0, m) {
            int tmp = p[next][j];
            next = tmp == 0 ? next : tmp;
        }
        if (bs[i] != next) return false; 
    }
    return true;
}

int main(int argc, char *argv[]) {
    cin >> n >> m;
    vector<vector<int>> p(n + 1, vector<int>(m));
    vector<int> bs(n + 1);
    FOR (i, 0, m) {
        int a;
        cin >> a;
        p[a][i] = a + 1;
        p[a + 1][i] = a;
    }
    FOR (i, 1, n + 1) {
        int b;
        cin >> b;
        bs[i] = b;
    }
    FOR (i, 1, n + 1) FOR (j, 0, m) {
        FOR (x, 1, n + 1) {
            if (x == i) p[x].insert(j, i + 1);
            else if (x == i + 1) p[x].insert(j, i);
            else p[x].insert(j, 0);
        
    }

    return 0;
}
