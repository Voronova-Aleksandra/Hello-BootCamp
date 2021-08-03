#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;
using ld = long double;

void BubbleGum(vector<ll> &arr, ll n){
    for(ll i = 0; i < n-1; i++){
        for(ll j = i+1; j < n; j++){
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll &i: arr) i = rand()%50 + 1;
    BubbleGum(arr, n);
    for(ll i : arr)
        cout << i << " ";
    return 0;
}