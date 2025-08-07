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

    ll n; cin >> n;
    cout << n << " ";
    while(n!=1){
        
        if(n%2==0){
            n = n/2;
            cout << n << " ";
        }
        else{
            n = n*3 + 1;
            cout << n<< " ";
        }
    }
    

    return 0;
}
