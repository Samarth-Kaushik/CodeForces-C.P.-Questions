#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        ll cnt = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[v[i].first - v[i].second]++;
        }
        for(auto& it : mpp){
            ll freq = it.second;
            cnt += ((freq - 1)*freq)/2 ;
        }
        cout << cnt << endl;
    }

    return 0;
}