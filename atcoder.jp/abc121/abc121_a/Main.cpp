#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)

int main(){
    int H,W,h,w;
    cin>>H>>W>>h>>w;

    cout << H*W-(H*w+W*h-(w*h)) << endl;
}