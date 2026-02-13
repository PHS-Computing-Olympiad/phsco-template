/* Copyright (c) 2026 pilliamw
 * All rights reserved.
 * 
 * This code may be used for educational and non-commercial purposes only,
 * provided that appropriate credit is given to the author.
 * 
 * Commercial use, including AI training and redistribution for profit, is prohibited.
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using pairii = pair<int, int>;
using pairll = pair<ll, ll>;

const ll LLMAX = LLONG_MAX;
const ll LLMIN = LLONG_MIN;

//const ll MOD = 1e9+7;
const ll MOD = 998244353;

ll modpow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

ll modinv(ll a) { return modpow(a, MOD-2); }
ll modprob(ll p, ll q) { return (p % MOD) * modinv(q) % MOD; }
ll add(ll P, ll Q) { return (P + Q) % MOD; }
ll mul(ll P, ll Q) { return (P * Q) % MOD; }
ll complement(ll P) { return (1 - P + MOD) % MOD; }

struct Fenwick {
    vector<ll> bits;
    ll n;
    Fenwick(ll n) { 
        this->n = n;
        bits.assign(n+1, 0);
    }

    void add(ll idx, ll val) {
        for (; idx <= n; idx += idx & -idx) bits[idx] += val;
    }
    
    ll sum(ll idx) {
        ll res = 0;
        for (; idx > 0; idx -= idx & -idx) res += bits[idx];
        return res;
    }
};

#define io_optimize() ios::sync_with_stdio(0); cin.tie(0);
#define io_file(input_file, output_file) freopen(input_file, "r", stdin); freopen(output_file, "w", stdout);

inline void YESNO(bool b) { std::cout << (b ? "YES" : "NO") << endl; }
inline void YES() { std::cout << "YES" << endl; }
inline void NO() { std::cout << "NO" << endl; }

int main() {
    io_optimize();
    // io_file("input.txt", "output.txt");

    // ----- WRITE CODE HERE ----- //
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        // test case code here
    }
}