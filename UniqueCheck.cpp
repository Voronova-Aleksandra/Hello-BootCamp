#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    ll n;
    cin >> n;
    set<ll> arr;
    cout << "Your array:" << endl;
    for(ll i = 0; i < n; i++) {
        ll a = rand() % n + 1;
        arr.insert(a);
        cout << a << " ";
    }
    cout << endl;
    if(n == arr.size()) cout << "All elements are unique";
    else cout << "Here is group of element";
    return 0;
}