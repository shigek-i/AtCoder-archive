#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main() {
    ll A,B,C; cin>>A>>B>>C;
    ll g = gcd(gcd(A,B), C);
    cout << (A-1)/g+(B-1)/g+(C-1)/g << endl;
}