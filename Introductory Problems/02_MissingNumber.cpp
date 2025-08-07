#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n-1);
    ll sum = 0;
    for(int i = 0; i<n-1; i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll real_sum = 1LL * n * (n + 1) / 2;
    cout << real_sum - sum << "\n";
    
    

    return 0;
}