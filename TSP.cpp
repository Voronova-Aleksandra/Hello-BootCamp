#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;
using ld = long double;

void gen_trip(vector<vector<ll>> &cost, ll n){
    for(ll i = 1; i <= n; i++){
        for(ll j = i+1; j <= n; j++){
            cost[i][j] = rand()%20 + 1;
            cost[j][i] = cost[i][j];
        }
    }
    /*cost = {{0, 0, 0, 0, 0, 0},
            {0, 0, 3, 13, 9, 7},
            {0, 3, 0, 6, 12, 10},
            {0, 13, 6, 0, 9, 6},
            {0, 9, 12, 9, 0, 8},
            {0, 7, 10, 6, 8, 0}};*/
    for(vector<ll> i: cost){
        for(ll j : i)
            cout << j << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    ll n, min_c = 1e9;
    cin >> n;
    vector<vector<ll>> cost(n+1, vector<ll>(n+1));
    vector<ll> path(n), res(n);
    gen_trip(cost, n);
    for(ll i = 0; i < n; i++) path[i] = i+1;
    do {
        ll c = 0;
        for(ll i = 0; i < n; i++) {
            ll from = path[i];
            ll to = path[(i+1) % n];
            c += cost[from][to];
        }
        cout << c << endl;
        if(c < min_c){
            min_c = c;
            res = path;
        }

    } while (next_permutation(path.begin()+1, path.end()));

    cout << "PATH:" << endl;
    for(ll i: res) cout << i << " ";
    cout << path[0] << endl << "Cost: " << min_c;

    return 0;
}
