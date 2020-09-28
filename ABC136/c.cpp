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
    int n,pre,h,flag=0;
    cin >> n;
    cin >> pre;
    FOR(i,1,n){
        cin >> h;
        if(h<pre){
            flag=1;
            break;
        }
        else if(h>=pre+1){ pre = h-1;}
      
    }

    flag ? cout << "No" << endl : cout << "Yes" << endl;
    return 0;
}