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



int main(){
    string s;
    cin >> s;
    if(s=="SAT")cout << 1 << endl;
    if (s == "SUN")cout << 7 << endl;
	if (s == "MON")cout << 6 << endl;
	if (s == "TUE")cout << 5 << endl;
	if (s == "WED")cout << 4 << endl;
	if (s == "THU")cout << 3 << endl;
	if (s == "FRI")cout << 2 << endl;
	return 0;
    

    return 0;
}