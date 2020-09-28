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
    int a,b,c,d;
    cin >> a >> b >> c;
    (c-(a-b))>=0 ? d = (c-(a-b)) : d = 0 ;
    cout << d << endl;  
    return 0;
}