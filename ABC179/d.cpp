#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>

using namespace std;

template<int MOD> struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() const { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b, swap(a, b);
            u -= t * v, swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr istream& operator >> (istream &is, Fp<MOD>& x) noexcept {
        is >> x.val;
        x.val %= MOD;
        if (x.val < 0) x.val += MOD;
        return is;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};


#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;
const int MOD = 998244353;
using mint = Fp<MOD>;

// 一列に並んだ Nマスから成るマス目があり、マスには左から順番に1,2,…,N の番号がついています。
// このマス目で暮らしている高橋君は、現在マス 1 にいて、後述の方法で移動を繰り返してマス N へ行こうとしています。10 以下の整数 K と、
// 共通部分を持たない K 個の区間 [L1,R1],[L2,R2],…,[LK,RK] が与えられ、これらの区間の和集合を S とします。ただし、区間 [l,r] は l 以上 r 以下の整数の集合を表します。
// マス i にいるとき、S から整数を 1 つ選んで (d とする)、マス i+d に移動する。ただし、マス目の外に出るような移動を行ってはならない。
// 高橋君のために、マス N に行く方法の個数を 998244353 で割った余りを求めてください。

int main() {
    // ans(n) = ans(n-k) + 1
    int N, K;
    vector<pair<int, int>> int_set;
    cin >> N >> K;
    FOR (i, 0, K) {
        int l, r;
        cin >> l >> r;
        int_set.push_back(make_pair(l, r));
    }
    vector<mint> dp(N, 0);
    vector<mint> sdp(N + 1, 0);
    dp[0] = 1;
    sdp[1] = 1;
    for (int n=1; n < N; ++n) {
        for (auto p : int_set) {
            int left = max(0, n - p.second);
            int right = max(0, n - p.first + 1);
            dp[n] += (sdp[right] - sdp[left]);
            sdp[n + 1] = (sdp[n] + dp[n]) ;
        }
    }
    cout << dp[N - 1] << endl;
    return 0;
}

