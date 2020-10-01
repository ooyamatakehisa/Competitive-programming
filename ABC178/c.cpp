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
const int MOD = (int) 1e9 + 7;
using mint = Fp<MOD>;

// 長さ N の整数の列 A1,A2,…,AN であって以下の条件をすべて満たすものはいくつありますか。
// - 0≤Ai≤9
// - Ai=0 なる i が存在する。
// - Ai=9 なる i が存在する。
// ただし、答えはとても大きくなる可能性があるので、109+7 で割った余りを出力してください。


int main(){
    int n;
    cin >> n;
    mint ans= modpow(mint(10),n)-modpow(mint(9),n)-modpow(mint(9),n)+modpow(mint(8),n);
    cout << ans << endl;
    return 0;
}

// 0≤Ai≤9  なる長さ N の整数列 {A} 全体について考えます。
// Ai=0 なる i が存在しないような {A} は、9N 通りあります。
// Ai=9 なる i が存在しないような {A} は、9N 通りあります。
// Ai=0 なる i と Ai=9 なる i がともに存在しないような {A} は、8N 通りあります。
// Ai=0 なる i と Ai=9 なる i の少なくとも一方が存在しないような {A} は、9N+9N−8N 通りあります。
// {A} は、10N 通りあります。Ai=0 なる i と Ai=9 なる i がともに存在するような {A} は、10N−9N−9N+8N 通りあります。
// 答えは 10N−9N−9N+8N です。