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
    int n, k, ct0=0, ct1=0;
    ll sum0=0, sum1=0;
    string s;
    vector<int> num0, num1;
    vector<pair<ll,int>> sumvec0;
    map<int,ll> sumap1;
    cin >> n >> k >> s;
    num0.push_back(0);
    num1.push_back(0);
    FOR(i,0,n){
        if(i==n-1){
            if(s[i]=='0'){
                if(ct1!=0){num1.push_back(ct1);}
                ct0 += 1;
                num0.push_back(ct0);
            }else{
                if(ct0!=0){num0.push_back(ct0);}
                ct1 += 1;
                num1.push_back(ct1);
            }
        }
        else{
            if(s[i]=='0'){
                if(ct1!=0){num1.push_back(ct1);}
                ct1 = 0;
                ct0 += 1;
            }else{
                if(ct0!=0){num0.push_back(ct0);}
                ct0 = 0;
                ct1 += 1;
            }
        }
    }
   
    if(num0.size()<=k+1){
        cout << s.size()  << endl;
    }
    else{
        num0.push_back(0);
        num1.push_back(0);
        FOR(j,0,k){
            sum0 += num0[j];
        }
        FOR(x,0,k+1){
            sum1 += num1[x];
        }
        sumvec0.push_back(make_pair(sum0,0));
        sumap1[0] = sum1;

        FOR(m,1,num0.size()-k+1){
            sum0 = sum0 - num0[m-1] + num0[m+k-1];
            sumvec0.push_back(make_pair(sum0,m));
        }
        FOR(y,1,num1.size()-k){
            sum1 = sum1 - num1[y-1] + num1[y+k];
            sumap1[y] = sum1;
        }
        sort(sumvec0.begin(),sumvec0.end(),greater<pair<ll,int>>());
        if(s[0]==1){
            cout << sumap1[sumvec0[0].second-1] + sumvec0[0].first << endl;
        }
        else{
            cout << sumap1[sumvec0[0].second] + sumvec0[0].first << endl;
        }
    }
    return 0;
}