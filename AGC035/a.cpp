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
  ll N;
  cin >> N;
  ll a[100100];
  FOR(i,0, N) cin >> a[i];
  ll sho;
  
  ll zeroflag = 1;
  FOR(i,0,N) if(a[i]!=0) zeroflag = 0;
  if(zeroflag==1){
    cout << "Yes" << endl;
    return 0;
  }
  
  sort(a, a+N);
  
  if(N%3!=0){
    cout << "No" << endl;
    return 0;
  }else{
    sho = N/3;
  }  
  
  ll flag = 1;
  FOR(i, 0, sho-1) if(a[i] != a[i+1]) flag = 0;
  FOR(i, sho, 2*sho-1) if(a[i] != a[i+1]) flag = 0;
  FOR(i, 2*sho, 3*sho-1) if(a[i] != a[i+1]) flag = 0;
  
  if(flag==0){
    cout << "No" << endl;
    return 0;
  }
  
  if((a[0]^a[sho])==a[2*sho]){
    cout << "Yes" << endl;
    return 0;
  }else{
    cout << "No" << endl;
    return 0;
  }
  
}