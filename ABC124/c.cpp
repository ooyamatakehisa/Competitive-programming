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

void solve(string S) {
  int a = 0;
  int b = 0;
  for (int i = 0; i < S.length(); i++) {
    if (i % 2 == 0) {
      if (S.substr(i, 1) == "0") {
        a += 1;
      }
    } else {
      if (S.substr(i, 1) != "0") {
        a += 1;
      }
    }
  }
 
  for (int i = 0; i < S.length(); i++) {
    if (i % 2 == 0) {
      if (S.substr(i, 1) == "1") {
        b += 1;
      }
    } else {
      if (S.substr(i, 1) != "1") {
        b += 1;
      }
    }
  }
 
  cout << min(a, b) << endl;
}
 
int main() {
  string S;
  cin >> S;
  solve(S);
  return 0;
}