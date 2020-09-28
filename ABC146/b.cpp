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
    int n;
    string s,all,ans;

    ans = "";    
    all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cin >> n >> s;
    
    for(int i=0;i<(int) s.length();i++){
        char tmp = s[i];
         
        for(int j=0;j<26;j++){
            if(tmp == all[j]){
                int tp = (j + n) % 26;
                ans += all[tp];
            }
        }
    }

    cout << ans << endl; 

    return 0;
}