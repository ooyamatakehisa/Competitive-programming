#include<iostream>
#include <math.h>
#include <algorithm>
#include<queue>
#include<map>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)

main(){
    string s;
    cin >> s;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){cout << "No" << endl;}
    else if(s[0]==s[1]&&s[2]==s[3]&&s[1]!=s[2] ){cout << "Yes" << endl;}
    else if(s[0]==s[2]&&s[1]==s[3]){cout << "Yes" << endl;}
    else if(s[0]==s[3]&&s[1]==s[2]){cout << "Yes" << endl;}

    else{cout << "No" << endl;}
    
}